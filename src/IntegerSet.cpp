//
// Created by rudri on 4/7/2024.
//

#include "IntegerSet.h"
std::ostream &operator<<(std::ostream &out, const IntegerSet &int_set) {
  out << "[";
  if (auto it = int_set.data.begin(); it != int_set.data.end()) {
    for (out << *it++; it != int_set.data.end(); ++it) out << ", " << *it;
  }
  out << "]";
  return out;
}
