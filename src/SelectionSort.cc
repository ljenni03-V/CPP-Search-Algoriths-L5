/*
 * Selection_sort.cpp
 *
 *  Created on: Nov 17, 2025
 *      Author: jack-bluni
 */

#include "MYheader.h"
using namespace std;

void selection(long  w[], long size){



	//swap lowest value with the first value starting at index 0
	//then swap lowest value with the first value starting at index 1
	//etc.
	for(int i = 0; i < size-1; i++){
		int min = w[i];
		int index = i;
		for(int j = i + 1; j < size; j++){
			if(w[j] < min){
				min = w[j];
				index = j;
			}
		}
		swap(w[index], w[i]);

	}

}

