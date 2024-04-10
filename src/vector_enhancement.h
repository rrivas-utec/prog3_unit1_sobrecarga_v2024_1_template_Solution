//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_UNIT1_VECTOR_ENHANCEMENT_V2024_1_TEXT_H
#define PROG3_UNIT1_VECTOR_ENHANCEMENT_V2024_1_TEXT_H

#include <vector>
#include <iostream>

std::vector<int> operator-(std::vector<int> v);
std::vector<int>& operator++(std::vector<int>& v);
std::vector<int> operator++(std::vector<int>& v, int);
std::vector<int>& operator--(std::vector<int>& v);
std::vector<int> operator--(std::vector<int>& v, int);
std::vector<int> operator|(std::vector<int> v1, const std::vector<int>& v2);
std::vector<int> operator+(std::vector<int> v1, const std::vector<int>& v2);

std::ostream& operator<<(std::ostream& out, const std::vector<int> v);


#endif //PROG3_UNIT1_VECTOR_ENHANCEMENT_V2024_1_TEXT_H
