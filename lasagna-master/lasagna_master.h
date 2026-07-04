#pragma once

#include <string>
#include <vector>

namespace lasagna_master {
struct amount {
  int noodles;
  double sauce;
};

int preparationTime(std::vector<std::string> layers,
                    int average_preparation_time = 2);

amount quantities(std::vector<std::string> layers);

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::vector<std::string> &friend_list);

void addSecretIngredient(std::vector<std::string> &my_list,
                         const std::string &secret_ingredient);

std::vector<double> scaleRecipe(std::vector<double> amounts, int new_amount);

} // namespace lasagna_master
