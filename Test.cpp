#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "SelectionSort.h"
#include <string>
#include <vector>

TEMPLATE_TEST_CASE("Test swap - Integers", "[swap]", int) {
  std::vector<TestType> numbers {10,20,30,40,50};
  swap(numbers,0,4);
  REQUIRE(numbers == std::vector<TestType> {50,20,30,40,10});
  swap(numbers, 1, 2);
  REQUIRE(numbers == std::vector<TestType> {50,30,20,40,10});
  swap(numbers,3,3);
  REQUIRE(numbers == std::vector<TestType> {50,30,20,40,10});
}

TEMPLATE_TEST_CASE("Test swap - Doubles", "[swap]", double) {
  std::vector<TestType> numbers {1.1,2.2,3.3,4.4,5.5};
  swap(numbers,0,4);
  REQUIRE(numbers == std::vector<TestType> {5.5,2.2,3.3,4.4,1.1});
  swap(numbers, 1, 2);
  REQUIRE(numbers == std::vector<TestType> {5.5,3.3,2.2,4.4,1.1});
  swap(numbers,3,3);
  REQUIRE(numbers == std::vector<TestType> {5.5,3.3,2.2,4.4,1.1});
}

TEMPLATE_TEST_CASE("Test swap - Strings", "[swap]", std::string) {
  std::vector<TestType> fruits {"Apple", "Banana", "Grape", "Orange", "Kiwi"};
  swap(fruits,0,4);
  REQUIRE(fruits == std::vector<TestType> {"Kiwi","Banana","Grape","Orange","Apple"});
  swap(fruits, 1, 2);
  REQUIRE(fruits == std::vector<TestType> {"Kiwi","Grape","Banana","Orange","Apple"});
  swap(fruits,3,3);
  REQUIRE(fruits == std::vector<TestType> {"Kiwi","Grape","Banana","Orange","Apple"});
}


TEMPLATE_TEST_CASE("Selection sort on Descending Order - Integers", "[selectionSort]",int) {
  std::vector<TestType> numbersInt {50,40,30,20,10};
  selectionSort(numbersInt);
  REQUIRE(std::is_sorted(numbersInt.begin(), numbersInt.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Descending Order - Doubles", "[selectionSort]",double) {
  std::vector<TestType> numbersDouble {50.5,40.4,30.3,20.2,10.1};
  selectionSort(numbersDouble);
  REQUIRE(std::is_sorted(numbersDouble.begin(), numbersDouble.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Descending Order - String", "selectionSort]",std::string) {
  std::vector<TestType> fruits {"Orange", "Kiwi", "Grape", "Banana", "Apple"};
  selectionSort(fruits);
  REQUIRE(std::is_sorted(fruits.begin(), fruits.end()));
}

TEMPLATE_TEST_CASE("Selection  on A Single Element - Integer", "[selectionSort]",int) {
  std::vector<TestType> singleElement {1};
  selectionSort(singleElement);
  REQUIRE(std::is_sorted(singleElement.begin(), singleElement.end()));
}

TEMPLATE_TEST_CASE("Selection  on A Single Element - Double", "[selectionSort]",double) {
  std::vector<TestType> singleElement {1.0};
  selectionSort(singleElement);
  REQUIRE(std::is_sorted(singleElement.begin(), singleElement.end()));
}

TEMPLATE_TEST_CASE("Selection  on A Single Element - String", "[selectionSort]",std::string) {
  std::vector<TestType> singleElement {"Apple"};
  selectionSort(singleElement);
  REQUIRE(std::is_sorted(singleElement.begin(), singleElement.end()));
}


TEMPLATE_TEST_CASE("Selection sort on Empty Array - Integer", "[selectionSort]",int) {
  std::vector<TestType> numbers {};
  selectionSort(numbers);
  REQUIRE(std::is_sorted(numbers.begin(), numbers.end()));
}
 
TEMPLATE_TEST_CASE("Selection sort on Empty Array - Double", "[selectionSort]",double) {
  std::vector<TestType> numbers {};
  selectionSort(numbers);
  REQUIRE(std::is_sorted(numbers.begin(), numbers.end()));
 }

TEMPLATE_TEST_CASE("Selection sort on Empty Array - String", "[selectionSort]",std::string) {
  std::vector<TestType> numbers {};
  selectionSort(numbers);
  REQUIRE(std::is_sorted(numbers.begin(), numbers.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Sorted Array - Integer", "[selectionSort]",int) {
  std::vector<TestType> sortedNumbers {1,2,3,4,5};
  selectionSort(sortedNumbers);
  REQUIRE(std::is_sorted(sortedNumbers.begin(), sortedNumbers.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Sorted Array - Double", "[selectionSort]",double) {
  std::vector<TestType> sortedNumbers {1.1,2.2,3.3,4.4,5.5};
  selectionSort(sortedNumbers);
  REQUIRE(std::is_sorted(sortedNumbers.begin(), sortedNumbers.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Sorted Array - String", "[selectionSort]",std::string) {
  std::vector<TestType> sortedFruits {"Apple", "Banana", "Grape", "Kiwi", "Orange"};
  selectionSort(sortedFruits);
  REQUIRE(std::is_sorted(sortedFruits.begin(), sortedFruits.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Array containing Duplicates - Integer", "[selectionSort]",int) {
  std::vector<TestType> duplicateNumbers {1,2,2,3,3,4,4,5};
  selectionSort(duplicateNumbers);
  REQUIRE(std::is_sorted(duplicateNumbers.begin(), duplicateNumbers.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Array containing Duplicates - Double", "[selectionSort]",double) {
  std::vector<TestType> duplicateNumbers {1.1, 2.2, 1.1, 4.4, 3.3, 4.4, 3.3, 2.2};
  selectionSort(duplicateNumbers);
  REQUIRE(std::is_sorted(duplicateNumbers.begin(), duplicateNumbers.end()));
}

TEMPLATE_TEST_CASE("Selection sort on Array containing Duplicates - String", "[selectionSort]",std::string) {
  std::vector<TestType> duplicateFruits {"Banana", "Banana", "Apple", "Kiwi", "Apple", "Orange", "Grape", "Kiwi", "Orange", "Grape"};
  selectionSort(duplicateFruits);
  REQUIRE(std::is_sorted(duplicateFruits.begin(), duplicateFruits.end()));
  
 }



