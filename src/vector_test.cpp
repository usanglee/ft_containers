#include "vector.hpp"

#include <iostream>
#include <iterator>
#include <memory>
#include <utility>
#include <vector>

#include "vector_test_utils.cpp"

void construct_void() {
  std::vector<int> v;
  ft::vector<int> my_v;
  std::cout << "[ construct_void ]" << std::endl;
  std::cout << "--------------------------" << std::endl;
  std::cout << "std_vector: "
            << "size: " << v.size() << " capacoty: " << v.capacity()
            << std::endl;
  print_vector<std::vector<int> >(v);

  std::cout << "my__vector: "
            << "size: " << my_v.size() << " capacoty: " << my_v.capacity()
            << std::endl;
  print_vector<ft::vector<int> >(my_v);
  std::cout << std::endl;
}

void construct_n_value() {
  std::vector<int> v(10, 7);
  ft::vector<int> my_v(10, 7);
  std::cout << "[ construct_n_value ]" << std::endl;
  std::cout << "--------------------------" << std::endl;
  std::cout << "std_vector: "
            << "size: " << v.size() << " capacoty: " << v.capacity()
            << std::endl;
  print_vector<std::vector<int> >(v);
  std::cout << "my__vector: "
            << "size: " << my_v.size() << " capacoty: " << my_v.capacity()
            << std::endl;
  print_vector<ft::vector<int> >(my_v);
  std::cout << std::endl;
}

void construct_iterator() {
  std::vector<int> v(7, 3);
  ft::vector<int> my_v(7, 3);

  std::cout << "[ construct_iterator ]" << std::endl;
  std::cout << "--------------------------" << std::endl;
  std::cout << "std_vector: "
            << "size: " << v.size() << " capacoty: " << v.capacity()
            << std::endl;
  print_vector<std::vector<int> >(v);
  std::cout << "my__vector: "
            << "size: " << my_v.size() << " capacoty: " << my_v.capacity()
            << std::endl;
  print_vector<ft::vector<int> >(my_v);
  std::cout << std::endl;
}

void modifier_push_back() {
  std::vector<int> v(3, 1);
  ft::vector<int> my_v(3, 1);

  std::cout << "[ modifier_push_back ]" << std::endl;
  std::cout << "--------------------------" << std::endl;
  std::cout << "std_vector: ";
  v.push_back(2);
  v.push_back(3);
  print_vector<std::vector<int> >(v);

  std::cout << "my_vector : ";
  my_v.push_back(2);
  my_v.push_back(3);
  print_vector<ft::vector<int> >(my_v);
  std::cout << std::endl;
}

void capacity_reserve() {
  std::vector<int> v(3, 10);
  ft::vector<int> my_v(3, 10);
  std::cout << "[ capacity_reserve ]" << std::endl;
  std::cout << "--------------------------" << std::endl;
  v.reserve(50);
  my_v.reserve(50);
  std::cout << "std_vector: "
            << "size: " << v.size() << " capacoty: " << v.capacity()
            << std::endl;
  std::cout << "my__vector: "
            << "size: " << my_v.size() << " capacoty: " << my_v.capacity()
            << std::endl;
  std::cout << std::endl;
}

void capacity_resize() {
  std::vector<int> v;
  ft::vector<int> my_v;
  std::cout << "[ capacity_resize ]" << std::endl;
  std::cout << "--------------------------" << std::endl;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  my_v.push_back(1);
  my_v.push_back(2);
  my_v.push_back(3);
  v.resize(10);
  my_v.resize(10);

  print_vector<std::vector<int> >(v);
  print_vector<ft::vector<int> >(my_v);
  // std::cout << v.max_size() << std::endl;
}