#pragma once

#include <string>

namespace star_map {
enum class System {
  BetaHydri,
  Sol,
  EpsilonEridani,
  AlphaCentauri,
  DeltaEridani,
  Omicron2Eridani
};
}

namespace heaven {
class Vessel {
public:
  Vessel(std::string name, int generation,
         star_map::System system = star_map::System::Sol);

  Vessel replicate(std::string name);
  void make_buster();
  bool shoot_buster();

  star_map::System current_system;
  std::string name{};
  int generation{};
  int busters{0};
};

std::string get_older_bob(Vessel &vessel_1, Vessel &vessel_2);
bool in_the_same_system(Vessel &vessel_1, Vessel &vessel_2);
} // namespace heaven
