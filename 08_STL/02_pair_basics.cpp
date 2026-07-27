// ============================================================
// 02 — STL Pair Basics
// Topic   : std::pair
// Concept : Storing two related values together
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. WHAT IS A PAIR?
    // A pair is a simple container that stores exactly TWO values together.
    // The values can be of different types!

    // DECLARATION
    pair<int, int> p1 = {10, 20};
    
    // 2. ACCESSING ELEMENTS (.first and .second)
    cout << "Pair p1: " << p1.first << ", " << p1.second << "\n\n";

    // 3. MIXING DATA TYPES
    pair<int, string> p2 = {1, "Vaishnavi"};
    cout << "Roll No: " << p2.first << "\nName   : " << p2.second << "\n\n";

    // 4. NESTED PAIRS (Storing 3 or more items)
    pair<int, pair<int, int>> p3 = {1, {3, 4}};
    cout << "First value : " << p3.first << "\n";
    cout << "Second value: " << p3.second.first << "\n";
    cout << "Third value : " << p3.second.second << "\n\n";

    // 5. ARRAY OF PAIRS
    // This is incredibly useful for storing coordinates or points!
    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} };
    cout << "Array of pairs, second element's first value: " << arr[1].first << "\n";

    return 0;
}

/*
 WHY USE PAIR?
 - Extremely useful in Graph algorithms (storing node and edge weight).
 - Useful when you need to return TWO values from a function.
 - Instead of creating a whole struct/class for two variables, just use a pair!
*/
