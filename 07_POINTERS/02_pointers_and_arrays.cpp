// ============================================================
// 02 — Pointers and Arrays
// Topic   : Array decay and pointer arithmetic
// Concept : How arrays are actually just pointers in disguise
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[5] = {10, 20, 30, 40, 50};

    // 1. THE BIG SECRET ABOUT ARRAYS
    // The name of the array ('arr') is actually a POINTER to its first element!
    cout << "Array name 'arr' gives  : " << arr << "\n";
    cout << "Address of arr[0] is    : " << &arr[0] << "\n";
    cout << "They are the exact same!\n\n";

    // 2. DEREFERENCING THE ARRAY NAME
    cout << "*arr gives you          : " << *arr << " (which is arr[0])\n\n";

    // 3. POINTER ARITHMETIC
    // If 'arr' points to the first box, what is 'arr + 1'?
    // It moves forward by ONE INTEGER SIZE (4 bytes) in memory!
    cout << "arr + 1 address is      : " << arr + 1 << "\n";
    cout << "*(arr + 1) gives you    : " << *(arr + 1) << " (which is arr[1])\n";
    cout << "*(arr + 2) gives you    : " << *(arr + 2) << " (which is arr[2])\n\n";

    // This means arr[i] is just syntax sugar for *(arr + i)
    
    // 4. LOOPING WITH POINTERS
    cout << "Looping array using pointer arithmetic:\n";
    for(int i = 0; i < 5; i++) {
        cout << *(arr + i) << " ";
    }
    cout << "\n";

    return 0;
}

/*
 POINTER ARITHMETIC EXPLAINED:
 If arr = 1000, and an integer is 4 bytes:
 arr + 0 = 1000  -> *1000 = 10
 arr + 1 = 1004  -> *1004 = 20
 arr + 2 = 1008  -> *1008 = 30

 WHY IS THIS IMPORTANT?
 When you pass an array to a function: void printArr(int arr[])
 C++ actually does this behind the scenes: void printArr(int* arr)
 It doesn't copy the whole array; it just passes the address of the first box.
 This is why changing an array inside a function changes the original array!
*/
