#ifndef ACTOR_MOVEMENT_SYSTEM_HPP
#define ACTOR_MOVEMENT_SYSTEM_HPP

#include <ignition/gazebo/System.hh>

namespace sample_system {
class ActorMovementSystem : public ignition::gazebo::System,
                            public ignition::gazebo::ISystemPreUpdate {
public:
  ActorMovementSystem();
  ~ActorMovementSystem() override;

  // Implementa el método PreUpdate de la interfaz ISystemPreUpdate
  void PreUpdate(const ignition::gazebo::UpdateInfo &_info,
                 ignition::gazebo::EntityComponentManager &_ecm) override;
};
} // namespace sample_system

#endif // ACTOR_MOVEMENT_SYSTEM_HPP
