//
// Created by rudri on 4/10/2024.
//

#include "catch.hpp"
#include "IntegerSet.h"
#include <iostream>
#include <sstream>

TEST_CASE("Crear IntegerSet", "[cre_set]") {
  IntegerSet int_set;
  std::cout << int_set;
}

TEST_CASE("Crear IntegerSet con inicializer", "[cre_set]") {
  IntegerSet int_set {1, 2, 3, 4, 4, 3};
  std::stringstream s{};
  s << int_set;
  REQUIRE(s.str() == "[1, 2, 3, 4]");
}

TEST_CASE("add en IntegerSet", "[add_set]") {
  IntegerSet int_set {1, 2, 3, 4, 4, 3};
  int_set.add(5);
  int_set.add(1);
  std::stringstream s{};
  s << int_set;
  REQUIRE(s.str() == "[1, 2, 3, 4, 5]");
}

TEST_CASE("remove en IntegerSet", "[rem_set]") {
  IntegerSet int_set {1, 2, 3, 4, 4, 3};
  int_set.remove(5);
  int_set.remove(3);
  std::stringstream s{};
  s << int_set;
  REQUIRE(s.str() == "[1, 2, 4]");
}

TEST_CASE("size en IntegerSet", "[siz_set]") {
  IntegerSet int_set {1, 2, 3, 4, 4, 3};
  int_set.remove(3);
  REQUIRE(int_set.size() == 3);
  int_set.add(3);
  int_set.add(5);
  REQUIRE(int_set.size() == 5);
}

TEST_CASE("clear en IntegerSet", "[cle_set]") {
  IntegerSet int_set {1, 2, 3, 4, 4, 3};
  int_set.clear();
  REQUIRE(int_set.size() == 0);
}

TEST_CASE("incluir en IntegerSet", "[inc_set]") {
  IntegerSet int_set {1, 2, 3, 4, 4, 3};
  REQUIRE(int_set(3) == true);
  REQUIRE(int_set(10) == false);
}

TEST_CASE("unión en IntegerSet", "[uni_set]") {
  IntegerSet int_set_1 {1, 2, 3};
  IntegerSet int_set_2 {3, 4, 5};
  auto int_set_3 = int_set_1 | int_set_2;
  std::stringstream s{};
  s << int_set_3;
  REQUIRE(s.str() == "[1, 2, 3, 4, 5]");
}

TEST_CASE("intersección en IntegerSet", "[int_set]") {
  IntegerSet int_set_1 {1, 2, 3, 4};
  IntegerSet int_set_2 {3, 4, 5, 6};
  auto int_set_3 = int_set_1 & int_set_2;
  std::stringstream s{};
  s << int_set_3;
  REQUIRE(s.str() == "[3, 4]");
}

TEST_CASE("diferencia simetrica en IntegerSet", "[dif_set]") {
  IntegerSet int_set_1 {1, 2, 3, 4};
  IntegerSet int_set_2 {3, 4, 5, 6};
  auto int_set_3 = int_set_1 ^ int_set_2;
  std::stringstream s{};
  s << int_set_3;
  REQUIRE(s.str() == "[1, 2, 5, 6]");
}

