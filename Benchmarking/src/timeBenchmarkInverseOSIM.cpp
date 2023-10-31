#include <iostream>
#include <fstream>

#include "BenchmarkingHelpers.hpp"
#include "Robots/RobotTypes.h"
#include "Utils/Timer.h"

using namespace grbda;
using namespace grbda::BenchmarkHelpers;

template <class T>
void runBenchmark(std::ofstream &file, const std::string& id)
{
    Timer timer;
    double t_cluster = 0.;
    double t_projection = 0.;
    double t_approx = 0.;

    const int num_robot_samples = 300;
    const int num_state_samples = 10;

    for (int i = 0; i < num_robot_samples; i++)
    {
        T robot = T(true);
        ClusterTreeModel<> cluster_model = robot.buildClusterTreeModel();
        RigidBodyTreePtr projection_model =
            std::make_shared<RigidBodyTreeModel<>>(cluster_model, FwdDynMethod::Projection);
        ReflectedInertiaTreePtr reflected_inertia_model =
            std::make_shared<ReflectedInertiaTreeModel<>>(cluster_model,
                                                          RotorInertiaApproximation::DIAGONAL);

        const int nq = cluster_model.getNumPositions();
        const int nv = cluster_model.getNumDegreesOfFreedom();

        for (int j = 0; j < num_state_samples; j++)
        {
            bool nan_detected = setRandomStates(cluster_model, projection_model,
                                                reflected_inertia_model);
            if (nan_detected)
            {
                j--;
                continue;
            }

            // Inverse Operational Space Inertia Matrix
            timer.start();
            cluster_model.inverseOperationalSpaceInertiaMatrix();
            t_cluster += timer.getMs();

            timer.start();
            projection_model->inverseOperationalSpaceInertiaMatrix();
            t_projection += timer.getMs();

            timer.start();
            reflected_inertia_model->inverseOperationalSpaceInertiaMatrix();
            t_approx += timer.getMs();
        }
    }

    const int num_samples = num_robot_samples * num_state_samples;
    file << id << ","
         << t_cluster / num_samples << ","
         << t_projection / num_samples << ","
         << t_approx / num_samples << std::endl;

    std::cout << "Finished benchmark for robot w/ id " << id << std::endl;
}

const std::string path_to_data = "../Benchmarking/data/TimingIOSIM_";

void runRevoluteWithRotorBenchmark()
{
    std::cout << "** Revolute With Rotor Benchmark **" << std::endl;
 
    std::ofstream rev_file;
    rev_file.open(path_to_data + "RevoluteChain.csv");

    runBenchmark<RevoluteChainWithRotor<2>>(rev_file, "2");
    runBenchmark<RevoluteChainWithRotor<4>>(rev_file, "4");
    runBenchmark<RevoluteChainWithRotor<6>>(rev_file, "6");
    runBenchmark<RevoluteChainWithRotor<8>>(rev_file, "8");
    runBenchmark<RevoluteChainWithRotor<12>>(rev_file, "12");
    runBenchmark<RevoluteChainWithRotor<16>>(rev_file, "16");
    runBenchmark<RevoluteChainWithRotor<20>>(rev_file, "20");
    runBenchmark<RevoluteChainWithRotor<24>>(rev_file, "24");

    rev_file.close();
}

void runRevolutePairWithRotorBenchmark()
{
    std::cout << "** Revolute Pair With Rotor Benchmark **" << std::endl;

    std::ofstream rev_pair_file;
    rev_pair_file.open(path_to_data + "RevolutePairChain.csv");

    runBenchmark<RevolutePairChainWithRotor<2>>(rev_pair_file, "2");
    runBenchmark<RevolutePairChainWithRotor<4>>(rev_pair_file, "4");
    runBenchmark<RevolutePairChainWithRotor<6>>(rev_pair_file, "6");
    runBenchmark<RevolutePairChainWithRotor<8>>(rev_pair_file, "8");
    runBenchmark<RevolutePairChainWithRotor<12>>(rev_pair_file, "12");
    runBenchmark<RevolutePairChainWithRotor<16>>(rev_pair_file, "16");
    runBenchmark<RevolutePairChainWithRotor<20>>(rev_pair_file, "20");
    runBenchmark<RevolutePairChainWithRotor<24>>(rev_pair_file, "24");

    rev_pair_file.close();
}

int main()
{
    runRevoluteWithRotorBenchmark();
    runRevolutePairWithRotorBenchmark();
    return 0;
}
