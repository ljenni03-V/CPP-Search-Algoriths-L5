#include <iostream>
#include <fstream>
#include "MYheader.h"
// Your ASort function(s) goes here ..


void InsertionSort(long data[], int n) {
for (int i = 1,j; i < n; i++) {
long tmp = data[i];
for (j = i; j > 0 && tmp < data[j-1]; j--)
data[j] = data[j-1];
data[j] = tmp;
}
}
