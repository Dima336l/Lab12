#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "SelectionSort.h"
#include <vector>

TEST_CASE("Test swap", "[swap]") {
  std::vector<int> numbers {10,20,30,40,50};
    swap(numbers,0,4);
    REQUIRE(numbers == std::vector<int> {50,20,30,40,10});
    swap(numbers, 1, 2);
    REQUIRE(numbers == std::vector<int> {50,30,20,40,10});
    swap(numbers,3,3);
    REQUIRE(numbers == std::vector<int> {50,30,20,40,10});
}

TEST_CASE("Selection sort on Descending Order", "selectionSort]") {
  std::vector<int> numbers {50,40,30,20,10};
  selectionSort(numbers);
  REQUIRE(numbers == std::vector<int> {10,20,30,40,50});
}

TEST_CASE("Selection  on A Single Element", "selectionSort]") {
  std::vector<int> singleElement {1};
  selectionSort(singleElement);
  REQUIRE(singleElement == std::vector<int> {1});
}


TEST_CASE("Selection sort on Empty Array", "selectionSort]") {
  std::vector<int> numbers {};
  selectionSort(numbers);
  REQUIRE(numbers == std::vector<int> {});
}

TEST_CASE("Selection sort on Sorted Array", "selectionSort]") {
  std::vector<int> sortedNumbers {1,2,3,4,5};
  selectionSort(sortedNumbers);
  REQUIRE(sortedNumbers == std::vector<int> {1,2,3,4,5});
}

TEST_CASE("Selection sort on Array containing Duplicates", "selectionSort]") {
  std::vector<int> duplicateNumbers {1,2,2,3,3,4,4,5};
  selectionSort(duplicateNumbers);
  REQUIRE(duplicateNumbers == std::vector<int> {1,2,2,3,3,4,4,5});
}






