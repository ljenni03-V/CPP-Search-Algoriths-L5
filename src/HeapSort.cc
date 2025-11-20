/*
 * Heap_sort.cpp
 *
 *  Created on: Nov 17, 2025
 *      Author: jack-bluni
 */

#include "MYheader.h"

//function to
void moveDown(long arr[], int size, int index){
	//tracks the largest value in the array
	int max = index;

	while(true){
		//get the indices for the left and right values
		int l = 2 * index + 1;
		int r = 2 * index + 2;

		//if left exists and is bigger than max it will replace it
		if(l < size && arr[l] > arr[max])
			max = l;

		//if right exists and is bigger than max it will replace it
		if(r < size && arr[r] > arr[max])
			max = r;

		//exit the loop once done
		if(max == index)
			break;

		//last case is to swap parent with the largest child value
		swap(arr[index], arr[max]);
		index = max;
	}


}

void heap(long data[], long w[], int size){
	//transfer values from input txt to wData array
	for(int i = 0; i < size; i++){
		w[i] = data[i];
	}

	//create the heap
	for(int i = size/2 - 1; i >= 0; i--){
		moveDown(w, size, i);
	}
	for(int i = size -1; i >= 1; i--){
		swap(w[0], w[i]);			//move largest value in heap to the w[i]
		moveDown(w, i, 0);			//restore heap using moveDown function
	}
}
