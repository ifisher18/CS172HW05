//////////////////////
// Ian Fisher
// CS 172
// 10/25/16
//////////////////////

#include <iostream>
using namespace std;

// Write function to check if the elements in the array are sorted
// test the function

template<typename T> // declares a template

// function that checks to see if an array is sorted from least to greatest
// returns true if sorted
bool isSorted(const T list[], int size) {
	// for loop that loops through the array and checks if all elements are sorted from least to greatest
	for (int i = 0; i < (size - 1); i++) {
		if (! (list[i] < list[i + 1])) { // if the elements are not sorted, return false
			return false;
		}
	}
	return true; // if the for loop breaks without triggering false, returns true
}

// isSorted test
int main() {
	
	// Test with array of ints
	cout << "int test: {1, 2, 3, 4, 5}" << endl;
	int Testints[5] = { 1, 2, 3, 4, 5 };
	if ((isSorted(Testints, 5)) == true) { // checks if the isSorted function returns true or false
		cout << "Sorted!" << endl;
	}
	else {
		cout << "Not sorted!" << endl;
	}
	cout << endl;

	// Test with array of doubles
	cout << "double test: {2.5, 4.7, 3.5, 2.4, 1.8}" << endl;
	double Testdubs[5] = { 2.5, 4.7, 3.5, 2.4, 1.8 };
	isSorted(Testdubs, 5);

	if ((isSorted(Testdubs, 5)) == true) { // checks if the isSorted function returns true or false
		cout << "Sorted!" << endl;
	}
	else {
		cout << "Not sorted!" << endl;
	}
	cout << endl;

	// Test with array of strings
	cout << "String test: {'Monday' , 'Tuesday' , 'Wednesday' , 'Thursday' , 'Friday'}" << endl;
	string TestStrings[5] = { "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" };
	isSorted(TestStrings, 5);
	if ((isSorted(TestStrings, 5)) == true) { // checks if the isSorted function returns true or false
		cout << "Sorted!" << endl;
	}
	else {
		cout << "Not sorted!" << endl;
	}
	cout << endl;

}