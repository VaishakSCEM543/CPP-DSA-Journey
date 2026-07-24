// ============================================================
// 01 — 1D Arrays
// Topic   : One-dimensional arrays
// Concept : Declaration, access, traversal, modification
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- DECLARE & INITIALIZE ---
    int arr[5] = {10, 20, 30, 40, 50};
    //  index:    [0] [1] [2] [3] [4]

    // --- ACCESS ELEMENTS ---
    cout << "First element : " << arr[0] << "\n";   // 10
    cout << "Last element  : " << arr[4] << "\n";   // 50
    cout << "Third element : " << arr[2] << "\n";   // 30

    // --- MODIFY AN ELEMENT ---
    arr[2] = 99;
    cout << "After modifying arr[2]: " << arr[2] << "\n";   // 99

    // --- TRAVERSE WITH FOR LOOP ---
    cout << "\nAll elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    // --- SUM & MAX OF ARRAY ---
    int sum = 0, maxVal = arr[0];
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "Sum = " << sum << "\n";
    cout << "Max = " << maxVal << "\n";

    // --- INPUT FROM USER ---
    int n;
    cout << "\nHow many elements? ";
    cin >> n;

    int nums[100];   // declare large enough (max size)
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}

/*
 MEMORY LAYOUT (arr[5]):
 Address: 1000  1004  1008  1012  1016
          ┌─────┬─────┬─────┬─────┬─────┐
          │ 10  │ 20  │ 30  │ 40  │ 50  │
          └─────┴─────┴─────┴─────┴─────┘
 Index:   [ 0 ] [ 1 ] [ 2 ] [ 3 ] [ 4 ]

 RULES:
 1. All elements MUST be the same type
 2. Size MUST be declared at compile time (or use vector)
 3. Indexing starts at 0, ends at size-1
 4. arr[size] → UNDEFINED BEHAVIOR (nasty bug!)

 COMMON MISTAKE:
 int arr[5];
 cout << arr[5];  ← WRONG! Valid indices: 0,1,2,3,4 only
*/
