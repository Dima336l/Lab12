#include "SelectionSort.h"

void swap(std::vector<int>& numbers, int i, int j) {
  int temp = numbers[i];
  numbers[i] = numbers[j];
  numbers[j] = temp;
}

void printArray(std::vector<int> numbers) {
  for (const auto& n: numbers) {
    std::cout << n << " ";
  }
  std::cout << std::endl;
}

void selectionSort(std::vector<int>& numbers) {
  for (size_t i = 0; i < numbers.size(); i++) {
    int min = i;
    for (size_t j = i+1; j < numbers.size(); j++) {
      if (numbers[j] < numbers[min]) {
	min = j;
      }
    }
    swap (numbers, i, min);
  }
}