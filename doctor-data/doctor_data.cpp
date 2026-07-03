#include "doctor_data.h"

namespace heaven {
Vessel::Vessel(std::string name, int generation, star_map::System system)
    : current_system(system), name(name), generation(generation) {
  this->current_system = system;
  this->name = name;
  this->generation = generation;
};

Vessel Vessel::replicate(std::string name) {
  return Vessel(name, this->generation + 1, this->current_system);
};

void Vessel::make_buster() { this->busters++; };

bool Vessel::shoot_buster() {
  if (this->busters > 0) {
    this->busters--;
    return true;
  }
  return false;
};
} // namespace heaven

std::string heaven::get_older_bob(heaven::Vessel &vessel_1,
                                  heaven::Vessel &vessel_2) {
  if (vessel_1.generation < vessel_2.generation) {
    return vessel_1.name;
  }
  return vessel_2.name;
};

bool heaven::in_the_same_system(heaven::Vessel &vessel_1,
                                heaven::Vessel &vessel_2) {
  return vessel_1.current_system == vessel_2.current_system;
};