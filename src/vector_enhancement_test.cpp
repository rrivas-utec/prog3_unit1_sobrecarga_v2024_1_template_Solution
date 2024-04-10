//
// Created by rudri on 10/11/2020.
//
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <vector>
#include "vector_enhancement.h"

TEST_CASE("Negación de vector", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {-1, -2, -3, -4};
  auto v3 = -v1;
  REQUIRE(v2 == v3);
}

TEST_CASE("Autoincremento de vector", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {2, 3, 4, 5};
  auto const& v3 = ++v1;
  REQUIRE(v2 == v3);
}

TEST_CASE("Autoincremento de vector 2", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {2, 3, 4, 5};
  ++v1;
  REQUIRE(v2 == v1);
}

TEST_CASE("Autodecremento de vector", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {0, 1, 2, 3};
  auto const& v3 = --v1;
  REQUIRE(v2 == v3);
  REQUIRE(v1 == v3);
}

TEST_CASE("Autodecremento de vector 2", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {0, 1, 2, 3};
  --v1;
    REQUIRE(v2 == v1);
}

TEST_CASE("Sumar de vectores", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  auto v3 = v1 + v1 + v1;
  for (size_t i = 0; i < v1.size(); ++i)
    REQUIRE(v3[i] == v1[i]*3);
}

TEST_CASE("Sumar de vectores 2", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {1, 2, 3, 4, 5};
  REQUIRE_THROWS_AS([&]{ v1 + v2; }(), std::range_error);
}

TEST_CASE("Concatenar vectores", "vector") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {5, 6, 7, 8};
  std::vector<int> v3 = {1, 2, 3, 4, 5, 6, 7, 8};
  auto v4 = v1 | v2;
  REQUIRE(v3 == v4);
}
