#include <iostream>
using namespace std;
#ifndef SORT_H
#define SORT_H
#define TMP double

void ShellSort(TMP *src, int n);
void InsertSort(TMP *src, int n);
void MergeSort(TMP *src, int n);
void dealMergeSort(TMP *src, TMP *tmp, int start, int end);
void QuickSort(TMP *src, int n);
#endif