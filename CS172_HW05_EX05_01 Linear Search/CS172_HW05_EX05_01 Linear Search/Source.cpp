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
    // Arrays of int, double, and string values
    int ArrayInts[] = {1, 2, 3, 4, 5, 6, 7};
    double ArrayDubs[] = {2.5, 6.8, 9.76, 4.22};
    string ArrayString [] = {'Monday' , 'Tuesday' , 'Wednesday' , 'Thursday'};
    
    // tests the LinearSearch function with ints
    cout << linearSearch(ArrayInts, 5, 7) << endl;
    
    // tests the LinearSearch functin with doubles
    cout << LinearSearch(ArrayDubs, 6.8, ArrayDubs.size_t) << endl;
    
    // tests the LinearSearch function with strings
    cout << linearSearch(ArrayString, <#T key#>, <#int arraySize#>)
}
