#include "SelectionSort.h"

template <typename T>
void swap(std::vector<T>& list, int i, int j) {
  T temp = list[i];
  list[i] = list[j];
  list[j] = temp;
}
template void swap<int>(std::vector<int>&, int, int);
template void swap<double>(std::vector<double>&, int, int);
template void swap<std::string>(std::vector<std::string>&, int, int);

template <typename T>
void printArray(const std::vector<T> list) {
  for (const auto& n: list) {
    std::cout << n << " ";
  }
  std::cout << std::endl;
}

template <typename T>
void selectionSort(std::vector<T>& list) {
  int n = list.size();
  for (size_t i = 0; i < n; i++) {
    int min = i;
    for (size_t j = i+1; j < n; j++) {
      if (list[j] < list[min]) {
	min = j;
      }
    }
    if (min != i) {
      swap(list, i, min);
    }
  }
}

template void selectionSort<int>(std::vector<int>&);
template void selectionSort<double>(std::vector<double>&);
template void selectionSort<std::string>(std::vector<std::string>&);
