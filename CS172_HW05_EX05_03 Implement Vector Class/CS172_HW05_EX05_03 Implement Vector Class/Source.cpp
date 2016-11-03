//////////////////////////
// Ian Fisher
// CS 172
// 10/25/16
/////////////////////////

#include <iostream>
using namespace std;

// Implement the vector class as an exercise
// implement only the functions defined in the UML class diagram, as shown in Figure 12.2
template <typename T>
class vector {
	// data field
private:
	T NewArray[];
	int ArraySize;
	int ArrayLength;

public:
	// Constructs an empty vector with the specified element type DONE
	vector() {
		ArraySize = 15;
		ArrayLength = 0;
		NewArray = new T[ArraySize];
	}

	// deconstructor that deletes NewArray DONE
	~vector() {
		delete[] NewArray;
	}

	// Constructs a vector with the initial size, filled with default values DONE
	vector (int size) {
		ArraySize = size;
		ArrayLength = 0;
		NewArray = new T[size];
	}

	// Constructs a vector with the initial size, filled with specified values DONE
	vector (int size, T default) {
		ArraySize = size;
		ArrayLength = 0;
		NewArray = new T[size];
		for (int i = 0; i > size; i++) {
			NewArray[i] = default;
		}
	}
	
	// Appends the element in this vector ... finish this
	void push_back(T size) {
		if (ArrayLength >= Arraysize) {
			T* NewArray[] = new int[(2 * size)]; // creates a pointer that doubles the size of each memory location
			for (int i = 0; i < size; i++) // for loop that accesses the array and creates a copy of Doublearray in list
			{
				NewArray[i] = list[i]; // copy of Doublearray in list
			}
			delete list; // deletes list since it is old memory space
		}
	}

	// Removes the last element from this vector DONE
	void pop_back() {
		return NewArray[--size];
	}

	// Returns the number of the elements in this vector DONE
	unsigned const size() {
		return size;
	}

	// Returns the element at the specified index in this vector DONE
	T const at(int index) {
		return NewArray[index];
	}

	// Returns true if this vector is empty DONE
	bool const empty () {
		if (ArrayLength == 0) {
			return true;
		}
	}

	// Removes all elements from this vector DONE
	void clear () {
		ArrayLength = 0;
	}

	// Swaps the contents of this vector with the specified vector DONE
	void swap(T& t1, T& t2) {
		T tmp(t1); // assigns a temporary location for t1
		t1 = t2; // duplicates t1 into t2
		t2 = tmp; // asigns t2 to temp
	}
};

int main() {
	return 0;
}
