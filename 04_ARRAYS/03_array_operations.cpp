// ============================================================
// 03 — Array Operations
// Topic   : Common operations on arrays
// Concept : Linear search, reverse, sort, find max/min
// ============================================================

#include <bits/stdc++.h>
using namespace std;

// ── FIND MAXIMUM ─────────────────────────────────────────────
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

// ── FIND MINIMUM ─────────────────────────────────────────────
int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal)
            minVal = arr[i];
    }
    return minVal;
}

// ── LINEAR SEARCH ────────────────────────────────────────────
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target)
            return i;    // return index where found
    }
    return -1;           // -1 means NOT found
}

// ── REVERSE AN ARRAY ─────────────────────────────────────────
void reverseArray(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);   // built-in swap
        left++;
        right--;
    }
}

// ── SUM OF ALL ELEMENTS ──────────────────────────────────────
int sumArray(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];
    return total;
}

// ── PRINT ARRAY HELPER ───────────────────────────────────────
void printArray(int arr[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << " ]\n";
}

// ════════════════════════════════════════════════════════════
int main() {

    int arr[] = {64, 25, 12, 92, 38, 47, 5};
    int n = 7;

    cout << "Original Array : "; printArray(arr, n);
    cout << "\n";

    // MAX & MIN
    cout << "Maximum value  : " << findMax(arr, n) << "\n";
    cout << "Minimum value  : " << findMin(arr, n) << "\n";
    cout << "Sum of all     : " << sumArray(arr, n) << "\n";
    cout << "\n";

    // LINEAR SEARCH
    int target = 92;
    int idx = linearSearch(arr, n, target);
    if (idx != -1)
        cout << target << " found at index " << idx << "\n";
    else
        cout << target << " NOT found\n";

    int notThere = 100;
    idx = linearSearch(arr, n, notThere);
    if (idx != -1)
        cout << notThere << " found at index " << idx << "\n";
    else
        cout << notThere << " NOT found\n";

    cout << "\n";

    // REVERSE
    cout << "Before reverse : "; printArray(arr, n);
    reverseArray(arr, n);
    cout << "After reverse  : "; printArray(arr, n);
    cout << "\n";

    // SORT (using built-in sort from STL)
    sort(arr, arr + n);                  // ascending order
    cout << "After sort (asc) : "; printArray(arr, n);

    sort(arr, arr + n, greater<int>());  // descending order
    cout << "After sort (desc): "; printArray(arr, n);

    return 0;
}

/*
 SAMPLE OUTPUT:
 Original Array  : [ 64, 25, 12, 92, 38, 47, 5 ]
 Maximum value   : 92
 Minimum value   : 5
 Sum of all      : 283
 92 found at index 3
 100 NOT found
 Before reverse  : [ 64, 25, 12, 92, 38, 47, 5 ]
 After reverse   : [ 5, 47, 38, 92, 12, 25, 64 ]
 After sort (asc): [ 5, 12, 25, 38, 47, 64, 92 ]
 After sort(desc): [ 92, 64, 47, 38, 25, 12, 5 ]

 KEY CONCEPTS:
 Linear Search   → check each element one by one → O(n)
 Reverse         → two-pointer technique (left & right)
 sort(arr, arr+n) → STL sort, uses introsort → O(n log n)

 THE TWO-POINTER TRICK (very common in DSA!):
 ┌────────────────────────────┐
 │ [5, 47, 38, 92, 12, 25, 64]│
 │  ↑                      ↑  │
 │ left                  right │
 │  swap → move both inward   │
 └────────────────────────────┘
*/
