//////////////////////////
// Ian Fisher
// CS 172
// 10/25/16
//////////////////////////

#include <iostream>
#include <vector>
using namespace std;

// Implement the vector class as an exercise
// implement only the functions defined in the UML class diagram, as shown in Figure 12.2

class vector<elementType> {
	// data field

public:
	// Constructs an empty vector with the specified element type
	vector <elementType>() {
		vector <elementType>;
	}

	// Constructs a vector with the initial size, filled with default values
	vector <elementType>(size : int) {
		vector <elementType>[size];
	}

	// Constructs a vector with the initial size, filled with specified values
	vector <elementType>(size : int, defaultValue : elementType) {
		
	}
	
	// Appends the element in this vector
	void push_back(element : elementType) {}

	// Removes the last element from this vector
	void pop_back() {}

	// Returns the number of the elements in this vector
	unsigned const size() {}

	// Returns the element at the specified index in this vector
	elementType const at(index: int) {}

	// Returns true if this vector is empty
	bool const empty () {}

	// Removes all elements from this vector
	void clear () {}

	// Swaps the contents of this vector with the specified vector
	void swap(v2: vector) {
		
	}
};
