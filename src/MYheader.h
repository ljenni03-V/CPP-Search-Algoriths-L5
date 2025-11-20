/*
 * MYheader.h
 *
 *  Created on: Nov 17, 2025
 *      Author: lucas-jennings
 */

#ifndef MYHEADER_H_
#define MYHEADER_H_

// DO NOT forget to add the prototypes for your ASort, BSort, and other functions below!


#include <string>
#include <unistd.h>
#define MAXSIZE	 2100000

using namespace std;

void	printmenu();
void	printarray(long data[], long size);
int		readfile(string infilename, long data[]);
int		writefile(long data[], long size, string outfilename);
void	swap(long& x, long& y);
void    InsertionSort(long data[], int size);

void    countingsort(long matr [], long Z);
void    bubblesort(long data[], long size);
void    quicksort(long data[], long size);
void selection(long data[], long w[], long size);

#endif /* MYHEADER_H_ */
