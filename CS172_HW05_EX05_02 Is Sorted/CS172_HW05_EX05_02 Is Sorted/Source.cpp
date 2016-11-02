//////////////////////
// Ian Fisher
// CS 172
// 10/25/16
//////////////////////

#include <iostream>
using namespace std;

// Write function to check if the elements in the array are sorted
// test the function

template<typename T>

// function that checks to see if an array is sorted
// returns true if sorted
bool isSorted(const T list[], int size) {
	for (int i = 0; i < (size - 1); i++) {
		if (! (list[i] < list[i + 1])) {
			return false;
		}
	}
	return true;
}

// isSorted test
int main() {
	
	// Test with array of ints
	cout << "int test: {1, 2, 3, 4, 5 }" << endl;
	int Testints[5] = { 1, 2, 3, 4, 5 };
	if ((isSorted(Testints, 5)) == true) {
		cout << "Sorted!" << endl;
	}
	else {
		cout << "Not sorted!" << endl;
	}
	cout << endl;

	// Test with array of doubles
	cout << "double test: { 2.5, 4.7, 3.5, 2.4, 1.8 }" << endl;
	double Testdubs[5] = { 2.5, 4.7, 3.5, 2.4, 1.8 };
	isSorted(Testdubs, 5);
	if ((isSorted(Testdubs, 5)) == true) {
		cout << "Sorted!" << endl;
	}
	else {
		cout << "Not sorted!" << endl;
	}
	cout << endl;

	// Test with array of strings
	cout << "String test: {}" << endl;
	string TestStrings[5] = { "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" };
	isSorted(TestStrings, 5);
	if ((isSorted(TestStrings, 5)) == true) {
		cout << "Sorted!" << endl;
	}
	else {
		cout << "Not sorted!" << endl;
	}
	cout << endl;

}