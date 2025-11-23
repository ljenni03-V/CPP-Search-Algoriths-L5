//author: James Vo
#include "MYheader.h"


void bubblesort(long data[], long size){
	for (long i=0; i<size-1; i++){
		for (long j = size-1; j>1; j--){
			if(data[j]<data[j-1]){
				swap(data[j], data[j-1]);
			}
		}
	}
}

