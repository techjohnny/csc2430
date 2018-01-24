// LabListRandom
// CSC 2430 Lab Assignment
// Written by:
// Date:

#include <iostream>
#include <iomanip>
#include <cstddef>
#include <limits>
using namespace std;

#include "LabListP.h"

void printListClass(char listname[], const ListClass& lst)
{
	cout << listname << ": length=" << lst.getLength() << " items" << endl;

	int numitems = lst.getLength();
	for (int i = 1; i <= numitems; ++i)
	{
		int val;
		if (lst.retrieve(i, val))
			cout << setw(3) << i << ": " << setw(5) << val << endl;
		else
			cout << "Cannot retrieve item from position " << i << endl;
	}
	cout << endl;
}

int main()
{
	/////////////////////////////////////////////////
	// setup
	const int N = 10;			// number of items, used only to create initial list of values
	const int RANGE = 32768;	// value range. Set to INT_MAX for a list of values from 0 .. 32767

	// Prepare random number generator with initial seed value
	//    and discard the first few data items in the sequence
	srand(3);
	for (int i = 0; i < 10; ++i)
		rand();

	/////////////////////////////////////////////////
	// Greeting
	cout << "Linked List Lab: Implemented by Mike Tindall" << endl;
	cout << "Randomly generate list of " << N << " values in range 0-" << RANGE - 1 <<
			" and convert into a sorted list" << endl << endl;

	/////////////////////////////////////////////////
	// Create initial "by position" data value list
	ListClass listbyposition;

	for (int i = 1; i <= N; ++i)
	{
		int val = rand() % RANGE;		// produce next random number value
		listbyposition.insert(i, val);  // Put val into list at position i
	}

	// Output initial data list
	printListClass("listbyposition", listbyposition);

	system("pause");
	return(0);
}