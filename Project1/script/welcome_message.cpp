#include <gazebo/gazebo.hh>

namespace gazebo
{
  class WorldPluginBuildMyWorld : public WorldPlugin
  {
    public: WorldPluginBuildMyWorld() : WorldPlugin()
            {
              printf("Welcome to Marcio’s World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(WorldPluginBuildMyWorld)
}
