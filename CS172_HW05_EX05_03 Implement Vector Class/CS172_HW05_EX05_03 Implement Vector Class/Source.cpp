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
	void push_back(element : elementType) {}
	void pop_back() {}
	unsigned const size() {}
	elementType const at(index: int) {}
	bool const empty () {}
	void clear () {}
	void swap(v2: vector) {}
};
int main() {
	return 0;
}