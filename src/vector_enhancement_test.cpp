//
// Created by rudri on 10/11/2020.
//

#include "catch.hpp"
#include "vector_enhancement.h"
#include <vector>
#include <sstream>

TEST_CASE("Negación de vector", "[neg_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {-1, -2, -3, -4};
  auto v3 = -v1;
  REQUIRE(v2 == v3);
}

TEST_CASE("Autoincremento de vector", "[inc_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {2, 3, 4, 5};
  auto const& v3 = ++v1;
  REQUIRE(v2 == v3);
}

TEST_CASE("Autoincremento de vector 2", "[inc_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {2, 3, 4, 5};
  ++v1;
  REQUIRE(v2 == v1);
}

TEST_CASE("Autodecremento de vector", "[dec_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {0, 1, 2, 3};
  auto const& v3 = --v1;
  REQUIRE(v2 == v3);
  REQUIRE(v1 == v3);
}

TEST_CASE("Autodecremento de vector 2", "[dec_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {0, 1, 2, 3};
  --v1;
    REQUIRE(v2 == v1);
}

TEST_CASE("Sumar de vectores", "[sum_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  auto v3 = v1 + v1 + v1;
  for (size_t i = 0; i < v1.size(); ++i)
    REQUIRE(v3[i] == v1[i]*3);
}

TEST_CASE("Sumar de vectores 2", "[sum_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {1, 2, 3, 4, 5};
  REQUIRE_THROWS_AS([&]{ v1 + v2; }(), std::range_error);
}

TEST_CASE("Concatenar vectores", "[con_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {5, 6, 7, 8};
  std::vector<int> v3 = {1, 2, 3, 4, 5, 6, 7, 8};
  auto v4 = v1 | v2;
  REQUIRE(v3 == v4);
}

TEST_CASE("Producto de vector con escalar", "[prod_escalar_vector]") {
  std::vector<int> v1 = {1, 2, 3, 4};
  std::vector<int> v2 = {10, 20, 30, 40};
  auto v4 = v1 * 10;
  REQUIRE(v4 == v2);
}


TEST_CASE("Validando operador <<", "[ostream_vector]") {
  std::stringstream s{};
  std::vector<int> v1 = {1, 2, 3, 4};
  s << v1;
  REQUIRE(s.str() == "[1, 2, 3, 4]");
}
