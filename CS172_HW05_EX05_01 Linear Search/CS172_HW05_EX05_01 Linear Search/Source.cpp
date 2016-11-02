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
// function that searches through an array for a predetermined 'key'
int linearSearch(const T list[], T key, int arraySize)
{
	// for loop that loops through the array and checks if the key is equal to list[i]
    for(int i = 0; i < arraySize; i++)
    {
        if (key == list[i])
            return i;
    }
    return -1;
}

// Test function for linearSearch
int main ()
{
    // Test arrays of int, double, and string values
    int ArrayInts[] = {1, 2, 3, 4, 5, 6, 7};
    double ArrayDubs[] = {2.5, 6.8, 9.76, 4.22};
    string ArrayString [] = {"Monday" , "Tuesday" , "Wednesday" , "Thursday"};
    
    // tests the LinearSearch function with ints
	cout << "**Test 1: int ArrayInts[] = {1, 2, 3, 4, 5, 6, 7};" << endl;
	cout << "5 is in array location " << linearSearch(ArrayInts, 5, 7) << endl;
    cout << "(" << linearSearch(ArrayInts, 5, 7) << ")" << endl;
	cout << endl;
    
    // tests the LinearSearch functin with doubles
	cout << "**Test 2: double ArrayDubs[] = {2.5, 6.8, 9.76, 4.22};" << endl;
	cout << "6.8 is in array location " << linearSearch(ArrayDubs, 6.8, 5) << endl;
    cout << "(" << linearSearch(ArrayDubs, 6.8, 5) << ")" << endl;
	cout << endl;
    
    // tests the LinearSearch function with strings
	cout << "**Test 3: string ArrayString [] = {'Monday' , 'Tuesday' , 'Wednesday' , 'Thursday'};" << endl;
	cout << "'Wednesday' is in array location " << linearSearch(ArrayString, string("Wednesday"), 4) << endl;
	cout << "(" << linearSearch(ArrayString, string("Wednesday"), 4) << ")" << endl;
	cout << endl;
}
