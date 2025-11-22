// Lucas Jennings, James Vo, Jack Bluni
//Lab 5, ECE 2161-001
//This program uses sorting algorithms to sort through 20 mb's worth of data
//and sorts the 20 mb's in order from least to greatest value

#include <iostream>
#include <ctime>
#include<fstream>
#include "MYheader.h"

using namespace std;


int main() {

	int		choice, sz;
	long	data[MAXSIZE], wData[MAXSIZE];
	double  begin_time, end_time, cpu_time_used;
	string  ifilename, ofilename;

	while (1) {

		printmenu();
		cin >> choice;

		switch (choice) {

			case 1: // Read input file and store data in arrays data1 and data2
                    // The function 'readfile' returns the size of the file that was read
					// If the file could not be read, 'readfile' returns -1

					ifilename = "lab5_input.txt";
					sz = readfile(ifilename, data);
					//sz = sz/2;
					if (sz < 0)	 {
						 cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
						 cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
						 return 0;
					}
					else cout << endl << "File size is: " << sz << endl;

					break;

			case 2: // Sort function A

                    // First, copy the contents of the array 'data' to the working array 'wData'. Your program should sort 'wData' and not 'data'.
						ifilename = "lab5_input.txt";
						 sz = readfile(ifilename, data);
						 //sz= sz/2;
						if (sz < 0)	 {
							cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
							cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
							return 0;
									}
					else {
						for (int i = 0; i<sz; ++i){
							wData[i] = data[i];
						}
					}


					begin_time = clock();   // start cpu timer

					// Calls Insertion Sort function here to sort the array 'wData''
					InsertionSort(wData, sz);
			        //  Note that 'wData' is of size 'sz' (see case 1).

					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Insertion Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_Ins_output.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			case 3: // Sort function B

			        // copies the contents of the array 'data' to the working array 'wData'.
				ifilename = "lab5_input.txt";
				sz = readfile(ifilename, data);
				//sz= sz/2;
				if (sz < 0)	 {
					cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
					cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
					return 0;
					}
				else {
				for (int i = 0; i<sz; ++i){
					wData[i] = abs(data[i]);
					}

					}

					//begin_time = clock();   // start cpu timer


					begin_time = clock();   // start cpu timer

					// Calls Counting  Sort function here to sort the array 'wData'
			        //  Note that 'wDdata' is of size 'sz' (see case 1).
					countingsort(wData, sz);


					end_time = clock();		// end cpu timer

					cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
					cout << endl << "Counting Sort ran for " << cpu_time_used << " secs.";

					ofilename = "lab5_Cou_output.txt";
					writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						 cerr << endl << "ERROR: Output File could not be opened." <<endl;
						 cerr << "       Quitting Now!" << endl << endl;
						 return 0;
					}
					else cout << endl << "Output written to " << ofilename << endl;

					break;

			// Write the other cases 4 - 7 here
			case 4: // Sort function C- bubble sort

				//copies the contents of the array 'data' to the working array 'wData'
				ifilename = "lab5_input.txt";
				sz = readfile(ifilename, data);
				//sz= sz/2;
				if (sz < 0)	 {
					cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
					cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
					return 0;
				}
				else {
					for (int i = 0; i<sz; ++i){
						wData[i] = data[i];
						}


								}

				//begin_time = clock();   // start cpu timer
				begin_time = clock();   // start cpu timer

				// Calls Bubble Sort function B here to sort the array 'wData'
				//  Note that 'wDdata' is of size 'sz' (see case 1).
				bubblesort(wData, sz);


				end_time = clock();		// end cpu timer

				cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
				cout << endl << "Bubble Sort ran for " << cpu_time_used << " secs.";

				ofilename = "lab5_Bub_output.txt";
				writefile(wData, sz, ofilename);

				if (sz < 0)	 {
					cerr << endl << "ERROR: Output File could not be opened." <<endl;
					cerr << "       Quitting Now!" << endl << endl;
					return 0;
				}
				else cout << endl << "Output written to " << ofilename << endl;

					break;
			case 5: // Sort function D- quicksort

				//copies the contents of the array 'data' to the working array 'wData'
				ifilename = "lab5_input.txt";
				sz = readfile(ifilename, data);
				//sz= sz/2;
				if (sz < 0)	 {
					cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
					cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
					return 0;
				}
				else {
					for (int i = 0; i<sz; ++i){
						wData[i] = data[i];
						}

								}

				//begin_time = clock();   // start cpu timer


				begin_time = clock();   // start cpu timer

				// Calls Quick Sort function here to sort the array 'wData'
				quicksort(wData, sz);


				end_time = clock();		// end cpu timer

				cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
				cout << endl << "Quick Sort ran for " << cpu_time_used << " secs.";

				ofilename = "lab5_Qui_output.txt";
				writefile(wData, sz, ofilename);

				if (sz < 0)	 {
					cerr << endl << "ERROR: Output File could not be opened." <<endl;
					cerr << "       Quitting Now!" << endl << endl;
					return 0;
				}
				else cout << endl << "Output written to " << ofilename << endl;

					break;
			case 6: // Sort function E- selection sort

				//copies the contents of the array 'data' to the working array 'wData'
				ifilename = "lab5_input.txt";
				sz = readfile(ifilename, data);
				//sz= sz/2;
				if (sz < 0)	 {
					cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
					cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
					return 0;
				}
				else {
					for (int i = 0; i<sz; ++i){
						wData[i] = data[i];
						}

								}
				//begin_time = clock();   // start cpu timer


				begin_time = clock();   // start cpu timer

				// Call Selection Sort function here to sort the array 'wData'
				//  Note that 'wDdata' is of size 'sz' (see case 1).
				selection( wData, sz);


				end_time = clock();		// end cpu timer

				cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
				cout << endl << "Selection Sort ran for " << cpu_time_used << " secs.";

				ofilename = "lab5_Sel_output.txt";
				writefile(wData, sz, ofilename);

				if (sz < 0)	 {
					cerr << endl << "ERROR: Output File could not be opened." <<endl;
					cerr << "       Quitting Now!" << endl << endl;
					return 0;
				}
				else cout << endl << "Output written to " << ofilename << endl;

					break;
			case 7: // Sort function E- selection sort

				//copies the contents of the array 'data' to the working array 'wData'
					ifilename = "lab5_input.txt";
					sz = readfile(ifilename, data);
					//sz= sz/2;
					if (sz < 0)	 {
						cerr << endl << "ERROR: Input File Not Found or File cannot be opened." <<endl;
						cerr << "       Please check that the file exists, its path, and try again!" << endl << endl;
					return 0;
						}
					else {
						for (int i = 0; i<sz; ++i){
							wData[i] = data[i];
							}
					}

					//begin_time = clock();   // start cpu timer
						begin_time = clock();   // start cpu timer
					// Calls Heap Sort function here to sort the array 'wData'
					//  Note that 'wDdata' is of size 'sz' (see case 1).
						heap( wData, sz);
						end_time = clock();		// end cpu timer
						cpu_time_used = (end_time - begin_time) / CLOCKS_PER_SEC;
							cout << endl << "Heap Sort ran for " << cpu_time_used << " secs.";
							ofilename = "lab5_Hea_output.txt";
							writefile(wData, sz, ofilename);

					if (sz < 0)	 {
						cerr << endl << "ERROR: Output File could not be opened." <<endl;
						cerr << "       Quitting Now!" << endl << endl;
						return 0;
						}
					else cout << endl << "Output written to " << ofilename << endl;
						break;

			case 0: // Exit Program

					cout << endl << "Received program exit command - I QUIT!" << endl << endl;

					return 0;

			default: // Error in selection

					cout << endl << "Incorrect selection, try again from the menu below." << endl;

		} // switch

	} // while

	return 0;
}
