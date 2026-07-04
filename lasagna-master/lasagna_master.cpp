#include "lasagna_master.h"
#include <string>
#include <vector>

namespace lasagna_master {
int preparationTime(std::vector<std::string> layers,
                    int average_preparation_time) {
  return layers.size() * average_preparation_time;
}

amount quantities(std::vector<std::string> layers) {
  int noodles{0};
  double sauce{0};

  for (const std::string &layer : layers) {
    if (layer == "noodles") {
      noodles += 50;
    } else if (layer == "sauce") {
      sauce += 0.2;
    }
  }
  return {noodles, sauce};
}

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::vector<std::string> &friend_list) {
  my_list.pop_back();
  my_list.push_back(friend_list.back());
}

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::string &secret_ingredient) {
  my_list.pop_back();
  my_list.push_back(secret_ingredient);
}

std::vector<double> scaleRecipe(std::vector<double> amounts, int new_amount) {
  std::vector<double> scaled_amounts;

  for (const double &amount : amounts) {
    scaled_amounts.push_back(amount * new_amount / 2);
  }

  return scaled_amounts;
}
} // namespace lasagna_master
