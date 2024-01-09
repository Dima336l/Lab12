#ifndef SELECTION_SORT_H
#define SELECTION_SORT_H

#include <vector>
#include <string>
#include <iostream>

template <typename T>
void swap(std::vector<T>& list, int i, int j);
template <typename T>
void printArray(const std::vector<T> list);
template <typename T>
void selectionSort(std::vector<T>& list);

#endif
