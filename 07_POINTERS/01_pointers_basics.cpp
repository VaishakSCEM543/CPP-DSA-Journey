// ============================================================
// 01 — Pointer Basics
// Topic   : Pointers & Addresses
// Concept : Memory addresses, &, *, and pointer syntax
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // 1. WHAT IS AN ADDRESS?
    int a = 10;
    // Every variable is stored somewhere in memory.
    // The '&' (address-of) operator tells us exactly WHERE.
    cout << "Value of a   : " << a << "\n";
    cout << "Address of a : " << &a << "\n\n";

    // 2. WHAT IS A POINTER?
    // A pointer is just a variable that STORES an address.
    int* ptr = &a;  // "ptr is a pointer to an integer"
    
    cout << "Value inside ptr     : " << ptr << " (matches address of a!)\n";
    cout << "Address of ptr itself: " << &ptr << "\n\n";

    // 3. THE DEREFERENCE OPERATOR (*)
    // If you have an address, how do you get the value stored there?
    // You "dereference" it using '*'.
    cout << "Value pointed to by ptr (*ptr) : " << *ptr << "\n";

    // 4. CHANGING VALUE VIA POINTER
    *ptr = 99;  // "Go to the address inside ptr, and change the value there to 99"
    cout << "\nChanged *ptr to 99...\n";
    cout << "New value of a : " << a << "\n";  // 'a' is now 99!

    return 0;
}

/*
 SUMMARY OF SYMBOLS:
 & (Address-of) : "Where do you live?"  (returns a memory address)
 * (Dereference): "Who lives here?"     (returns the value at the address)
 int*           : "I am a box designed to hold an address of an int."

 VISUALIZATION:
 int a = 10;
 int* ptr = &a;

 Memory:
 [ Address 0x100 ] ---> Contains: 10          (This is 'a')
 [ Address 0x200 ] ---> Contains: 0x100       (This is 'ptr')

 *ptr goes to 0x100 and finds the 10.
*/
