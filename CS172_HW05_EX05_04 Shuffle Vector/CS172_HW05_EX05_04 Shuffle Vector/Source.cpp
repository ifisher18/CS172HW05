//////////////////////////
// Ian Fisher
// CS 172
// 10/25/16
//////////////////////////

#include <iostream>
#include <ctime>
#include <time.h>
#include <vector>

using namespace std;

// Write a function that shuffles the contents in a vector
// write test program...

// function that shuffles the contents in a vector
template <typename T>
void shuffle(vector<T>& v) {
	// for loop that uses 2 randomized numbers to mix up the vector
	for (int i = 0; i < 100; i++) {
		int IndexRand1 = rand() % v.size(); // initializes IndexRand1 to a random number given the size of v
		int IndexRand2 = rand() % v.size(); // initializes IndexRand2 to a random number given the size of v
		// bit of code that checks to make sure that the two random indexes aren't equal to each other
		if (IndexRand1 == IndexRand2) {
			do {
				IndexRand2 = rand() % v.size(); // creates a new random number
			} while (IndexRand2 == IndexRand1);
		}
		swap(v[IndexRand1], v[IndexRand2]); // swaps the memory locations of each v: essentially, each time this void function is valled, values are swapped
	}
}

// test program
int main() {
	vector <int> intVector;
	// Store the numbers 1, 2, 3, 4....,10
	for (int i = 0; i < 10; i++)
		intVector.push_back(i + 1);
	cout << "Before the shuffle function, the numbers in the vector are: ";
	for (int i = 0; i < intVector.size(); i++)
		cout << intVector[i] << " ";
	cout << endl;
	cout << endl;
	cout << "After implementing the shuffle function, the displayed elements in the vector are now: ";
	for (int i = 0; i < intVector.size(); i++)
		shuffle(intVector);
}