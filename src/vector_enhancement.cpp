//
// Created by rudri on 10/11/2020.
//

#include "vector_enhancement.h"
#include <algorithm>
#include <ranges>
#include <stdexcept>

std::vector<int> operator-(std::vector<int> v) {
  std::ranges::for_each(v, [](auto& item) { item *= -1; });
  return v;
}

std::vector<int> &operator++(std::vector<int> &v) {
  std::ranges::for_each(v, [](auto& item) { ++item; });
  return v;
}

std::vector<int> operator++(std::vector<int> &v, int){
  auto result = v;
  std::ranges::for_each(v, [](auto& item) { ++item; });
  return result;
}

std::vector<int> &operator--(std::vector<int> &v) {
  for (auto& item: v) --item;
  return v;
}

std::vector<int> operator--(std::vector<int> &v, int) {
  auto result = v;
  for (auto& item: v) --item;
  return result;
}
std::vector<int> operator|(std::vector<int> v1, const std::vector<int> &v2) {
  v1.reserve(v1.size() + v2.size());
  for (auto& item: v2) v1.push_back(item);
  return v1;
}
std::vector<int> operator+(std::vector<int> v1,
                           const std::vector<int> &v2) {
  if (std::size(v1) != std::size(v2))
    throw std::range_error("vector size does not match");
  
  std::transform(v1.begin(), v1.end(),
                 v2.begin(), v1.begin(),
                 [](int a, int b) { return a + b; });
  return v1;
}