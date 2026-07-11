#include "power_of_troy.h"

namespace troy {

void give_new_artifact(human &person, std::string artifact_name) {
  artifact new_artifact(artifact_name);
  person.possession = std::make_unique<artifact>(new_artifact);
}

void exchange_artifacts(std::unique_ptr<artifact> &artifact1,
                        std::unique_ptr<artifact> &artifact2) {
  std::swap(artifact1, artifact2);
}

void manifest_power(human &person, std::string power_effect) {
  person.own_power = std::make_shared<power>(power_effect);
}

void use_power(human &caster, human &target) {
  target.influenced_by = caster.own_power;
}

int power_intensity(human &person) {
  if (person.own_power == nullptr) {
    return 0;
  }

  return person.own_power.use_count();
}
} // namespace troy
