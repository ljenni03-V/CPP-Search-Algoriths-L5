#include "MYheader.h"

template <class T>
void quicksort_impl(T data[], long first, long last){
	long lower = first+1, upper = last;

	swap(data[first], data[(first+last)/2]);
	T bound = data[first];

	while(lower <= upper){
		while(bound > data[lower])
			lower++;
		while(bound < data[upper])
			upper--;
		if(lower < upper)
			swap(data[lower++], data[upper--]);
		else
			lower++;
	}
	swap(data[upper], data[first]);

	if(first < upper - 1)
		quicksort_impl(data, first, upper - 1);
	if(upper + 1 < last)
		quicksort_impl(data, upper+1, last);
}
template<class T>
void quicksort_impl(T data[], long n){
	if(n<2)
		return;

	long max = 0;
	for(long i = 1; i<n; i++)
		if(data[max]<data[i])
			max = i;

	swap(data[n-1], data[max]);
	quicksort_impl(data, 0, n-2);

}

void quicksort(long data[], long size){
	quicksort_impl<long>(data, size);
}
