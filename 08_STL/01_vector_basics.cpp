// ============================================================
// 01 — STL Vector Basics
// Topic   : std::vector
// Concept : Dynamic arrays that can grow in size
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. WHAT IS A VECTOR?
    // A vector is an array that automatically grows in size when you add elements.
    // You don't need to specify the size upfront!

    // DECLARATION
    vector<int> v;  // Creates an empty vector of integers

    // 2. ADDING ELEMENTS (push_back / emplace_back)
    v.push_back(10); // v = {10}
    v.push_back(20); // v = {10, 20}
    v.push_back(30); // v = {10, 20, 30}
    
    // emplace_back is similar to push_back but slightly faster (creates element in-place)
    v.emplace_back(40); // v = {10, 20, 30, 40}

    // 3. ACCESSING ELEMENTS
    cout << "First element : " << v[0] << "\n";
    cout << "Second element: " << v.at(1) << " (safer, checks bounds)\n";
    cout << "Last element  : " << v.back() << "\n\n";

    // 4. SIZE AND CAPACITY
    cout << "Number of elements (size) : " << v.size() << "\n";
    
    // 5. REMOVING ELEMENTS
    v.pop_back(); // Removes the last element (40)
    cout << "Size after pop_back()     : " << v.size() << "\n\n";

    // 6. ITERATING THROUGH A VECTOR
    cout << "Vector elements: ";
    // Traditional for loop
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "\n";

    // For-each loop (Modern C++)
    cout << "Using for-each : ";
    for (int num : v) {
        cout << num << " ";
    }
    cout << "\n\n";

    // 7. PRE-SIZED VECTORS
    vector<int> v2(5, 100); // Creates a vector of size 5, all elements initialized to 100
    cout << "Pre-sized vector: ";
    for (int x : v2) cout << x << " ";
    cout << "\n";

    return 0;
}

/*
 WHY USE VECTOR INSTEAD OF ARRAY?
 1. Dynamic Size: You don't need to guess the maximum size (e.g., int arr[1000]).
 2. Built-in functions: .size(), .empty(), .clear(), .push_back().
 3. Safety: Vectors handle memory for you. No need to worry about memory leaks.
 4. Passing to functions: You can pass vectors by reference easily.

 COMPLEXITY:
 push_back() is generally O(1) time complexity.
*/
