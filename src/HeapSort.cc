/*
 * HeapSort.cc
 *
 */
#include "MYheader.h"

void moveDown(long arr[], int size, int index){
	int max = index;

	while(true){
		int l = 2 *index + 1;
		int r = 2*index + 2;
	if (r<size && arr[l] > arr[max])
		max = l;
	if (r<size && arr[r] > arr[max])
		max = r;
	if (max == index)
		break;

	swap(arr[index], arr[max]);
	index = max;
	}
}
	void heap (long data[], long w[], int size){
		for (int i = 0; i < size; i++){
			w[i] = data[i];
		}
		for (int i = size/2 -1; i>= 0; i--){
			moveDown(w, size, i);
		}
		for (int i = size -1; i>=1; i--){
			swap(w[0], w[1]);
			moveDown(w,i,0);
		}
	}
