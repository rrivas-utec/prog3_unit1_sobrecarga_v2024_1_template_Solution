//
// Created by rudri on 4/7/2024.
//

#ifndef PROG3_UNIT1_TEXT_V2024_1_INTEGERSET_H
#define PROG3_UNIT1_TEXT_V2024_1_INTEGERSET_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <initializer_list>

class IntegerSet {
  std::vector<int> data;
  static void _add(std::vector<int>& target, int value) {
    auto it = std::find(target.begin(), target.end(), value);
    if (it == target.end())
      target.push_back(value);
  }
public:
  IntegerSet() = default;
  IntegerSet(std::initializer_list<int> lst) {
    for (const auto &item : lst) {
      _add(data, item);
    }
  }
  void add(int value) {
    _add(data, value);
  }
  void remove(int value) {
    auto it = std::find(data.begin(), data.end(), value);
    if (it != data.end())
      data.erase(it);
  }
  [[nodiscard]] auto size() const {
    return data.size();
  }
  void clear() { data.clear(); }
  
  bool operator()(int value) {
    auto it = std::find(data.begin(), data.end(), value);
    return it != data.end();
  }

  IntegerSet operator|(const IntegerSet& other) {
    auto result = *this;
    for (const auto &item : other.data) {
      _add(result.data, item);
    }
    return result;
  }
  
  IntegerSet operator&(IntegerSet& other) {
    IntegerSet result;
    
    sort(data.begin(), data.end());
    sort(other.data.begin(), other.data.end());
    
    std::set_intersection(
        data.begin(), data.end(),
        other.data.begin(), other.data.end(),
        std::back_inserter(result.data));

    return result;
  }
  
  IntegerSet operator^(IntegerSet& other) {
    IntegerSet result;
    
    sort(data.begin(), data.end());
    sort(other.data.begin(), other.data.end());
    
    std::set_symmetric_difference(
        data.begin(), data.end(),
        other.data.begin(), other.data.end(),
        std::back_inserter(result.data));
    
    return result;
  }

  friend std::ostream& operator<<(std::ostream& out, const IntegerSet& int_set);
};

std::ostream& operator<<(std::ostream& out, const IntegerSet& int_set);

#endif // PROG3_UNIT1_TEXT_V2024_1_INTEGERSET_H
