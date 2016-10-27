//////////////////////////
// Ian Fisher
// CS 172
// 10/25/16
//////////////////////////

#include <iostream>
using namespace std;

// rewrite the linear search function in Listing 7.9 to use a generic type for array elements.
// test the function...

template<typename T>
int linearSearch(const T list[], T key, int arraySize)
{
	for(int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}

// Test
int main ()
{

	cout << linearSearch()
}