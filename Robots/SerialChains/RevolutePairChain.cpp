#include "RevolutePairChain.hpp"

namespace grbda
{

    template <size_t N>
    ClusterTreeModel RevolutePairChain<N>::buildRandomClusterTreeModel() const
    {
        using namespace GeneralizedJoints;
        
        ClusterTreeModel model{};

        std::string parent_name = "ground";
        for (size_t i(0); i < N / 2; i++)
        {
            // Link A
            const std::string linkA_name = "link-A-" + std::to_string(i);
            const auto linkA_Xtree = randomSpatialRotation<double>();
            const auto linkA_inertia = randomLinkSpatialInertia();
            CoordinateAxis linkA_joint_axis = ori::randomCoordinateAxis<double>();
            auto linkA = model.registerBody(linkA_name, linkA_inertia, parent_name, linkA_Xtree);

            // Link B
            const std::string linkB_name = "link-B-" + std::to_string(i);
            const auto linkB_Xtree = randomSpatialRotation<double>();
            const auto linkB_inertia = randomLinkSpatialInertia();
            CoordinateAxis linkB_joint_axis = ori::randomCoordinateAxis<double>();
            auto linkB = model.registerBody(linkB_name, linkB_inertia, linkA_name, linkB_Xtree);

            // Cluster
            const std::string cluster_name = "cluster-" + std::to_string(i);
            model.appendRegisteredBodiesAsCluster<RevolutePair>(
                cluster_name, linkA, linkB, linkA_joint_axis, linkB_joint_axis);

            // Contact points
            const std::string cpA_name = "cp-A-" + std::to_string(i);
            const Vec3<double> cpA_local_offset = Vec3<double>::Zero();
            model.appendContactPoint(linkA_name, cpA_local_offset, cpA_name);

            const std::string cpB_name = "cp-B-" + std::to_string(i);
            const Vec3<double> cpB_local_offset = Vec3<double>::Zero();
            model.appendContactPoint(linkB_name, cpB_local_offset, cpB_name);

            parent_name = linkA_name;
        }

        return model;
    }

    template <size_t N>
    ClusterTreeModel RevolutePairChain<N>::buildUniformClusterTreeModel() const
    {
        using namespace GeneralizedJoints;
        
        ClusterTreeModel model{};

        Mat3<double> I3 = Mat3<double>::Identity();
        Vec3<double> z3 = Vec3<double>::Zero();

        const double grav = 9.81;
        model.setGravity(Vec3<double>{grav, 0., 0.});

        // Inertia params
        const double I = 1.;
        const double Irot = 1e-4;
        const double m = 1.;
        const double l = 1.;
        const double c = 0.5;
        const double gr = 2.;
        const double br = 3.;

        // Uniform quantities
        CoordinateAxis axis = CoordinateAxis::Z;

        const SpatialTransform Xtree2 = SpatialTransform(I3, Vec3<double>(l, 0, 0.));

        Mat3<double> link_inertia;
        link_inertia << 0., 0., 0., 0., 0., 0., 0., 0., I;
        const SpatialInertia<double> link_spatiala_inertia(m, Vec3<double>(c, 0., 0.),
                                                           link_inertia);

        Mat3<double> rotor_inertia;
        rotor_inertia << 0., 0., 0., 0., 0., 0., 0., 0., Irot;
        const SpatialInertia<double> rotor_spatial_inertia(0., Vec3<double>::Zero(),
                                                           rotor_inertia);

        std::string parent_name = "ground";
        for (size_t i(0); i < N / 2; i++)
        {
            const SpatialTransform Xtree1 = i == 0 ? SpatialTransform(I3, z3) : Xtree2;

            // Link A
            const std::string linkA_name = "link-A-" + std::to_string(i);
            auto linkA = model.registerBody(linkA_name, link_spatiala_inertia,
                                            parent_name, Xtree1);

            // Link B
            const std::string linkB_name = "link-B-" + std::to_string(i);
            auto linkB = model.registerBody(linkB_name, link_spatiala_inertia,
                                            linkA_name, Xtree2);

            // Cluster
            const std::string cluster_name = "cluster-" + std::to_string(i);
            model.appendRegisteredBodiesAsCluster<RevolutePair>(
                cluster_name, linkA, linkB, axis, axis);

            parent_name = linkB_name;
        }

        return model;
    }

    template class RevolutePairChain<2ul>;
    template class RevolutePairChain<4ul>;

} // namespace grbda
