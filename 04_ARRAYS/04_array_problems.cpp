// ============================================================
// 04 — Array Classic Problems
// Topic   : Must-know array problems
// Concept : Second largest, duplicates, frequency, rotation
// ============================================================

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n) {
    cout << "[ ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << ", ";
    }
    cout << " ]\n";
}

// ── PROBLEM 1: Second Largest Element ────────────────────────
int secondLargest(int arr[], int n) {
    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first  = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;   // returns INT_MIN if no second largest
}

// ── PROBLEM 2: Count Frequency of Each Element ───────────────
void frequency(int arr[], int n) {
    bool visited[100] = {false};   // track already-printed elements

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;  // skip if already counted

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] == arr[i]) {
                count++;
                visited[j] = true;
            }
        }
        cout << arr[i] << " appears " << count << " time(s)\n";
    }
}

// ── PROBLEM 3: Check if Array is Sorted ──────────────────────
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1])
            return false;
    }
    return true;
}

// ── PROBLEM 4: Left Rotate Array by 1 ────────────────────────
void rotateLeft(int arr[], int n) {
    int first = arr[0];
    for (int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = first;
}

// ── PROBLEM 5: Move All Zeros to End ─────────────────────────
void moveZerosToEnd(int arr[], int n) {
    int pos = 0;   // position to place next non-zero
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos++] = arr[i];
        }
    }
    while (pos < n) {
        arr[pos++] = 0;
    }
}

// ════════════════════════════════════════════════════════════
int main() {

    // --- Problem 1: Second Largest ---
    cout << "══ Problem 1: Second Largest ══\n";
    int a[] = {12, 35, 1, 10, 34, 1};
    int n1 = 6;
    cout << "Array: "; printArray(a, n1);
    cout << "Second Largest: " << secondLargest(a, n1) << "\n\n";

    // --- Problem 2: Frequency ---
    cout << "══ Problem 2: Frequency Count ══\n";
    int b[] = {4, 4, 2, 5, 2, 4, 3};
    int n2 = 7;
    cout << "Array: "; printArray(b, n2);
    frequency(b, n2);
    cout << "\n";

    // --- Problem 3: Is Sorted? ---
    cout << "══ Problem 3: Is Sorted? ══\n";
    int sorted[]   = {1, 2, 3, 4, 5};
    int unsorted[] = {1, 3, 2, 4, 5};
    cout << "{ 1,2,3,4,5 } sorted? " << (isSorted(sorted,   5) ? "YES" : "NO") << "\n";
    cout << "{ 1,3,2,4,5 } sorted? " << (isSorted(unsorted, 5) ? "YES" : "NO") << "\n\n";

    // --- Problem 4: Rotate Left ---
    cout << "══ Problem 4: Left Rotate by 1 ══\n";
    int c[] = {1, 2, 3, 4, 5};
    cout << "Before: "; printArray(c, 5);
    rotateLeft(c, 5);
    cout << "After : "; printArray(c, 5);
    cout << "\n";

    // --- Problem 5: Move Zeros to End ---
    cout << "══ Problem 5: Move Zeros to End ══\n";
    int d[] = {0, 1, 0, 3, 12, 0, 5};
    int n5 = 7;
    cout << "Before: "; printArray(d, n5);
    moveZerosToEnd(d, n5);
    cout << "After : "; printArray(d, n5);

    return 0;
}

/*
 EXPECTED OUTPUT:
 ══ Problem 1: Second Largest ══
 Array: [ 12, 35, 1, 10, 34, 1 ]
 Second Largest: 34

 ══ Problem 2: Frequency Count ══
 Array: [ 4, 4, 2, 5, 2, 4, 3 ]
 4 appears 3 time(s)
 2 appears 2 time(s)
 5 appears 1 time(s)
 3 appears 1 time(s)

 ══ Problem 3: Is Sorted? ══
 { 1,2,3,4,5 } sorted? YES
 { 1,3,2,4,5 } sorted? NO

 ══ Problem 4: Left Rotate by 1 ══
 Before: [ 1, 2, 3, 4, 5 ]
 After : [ 2, 3, 4, 5, 1 ]

 ══ Problem 5: Move Zeros to End ══
 Before: [ 0, 1, 0, 3, 12, 0, 5 ]
 After : [ 1, 3, 12, 5, 0, 0, 0 ]

 WHY THESE PROBLEMS?
 These are REAL interview problems asked at companies like
 Amazon, Flipkart, and startups. You'll see these again when
 you hit LeetCode/GFG. Understanding them now builds the
 pattern recognition you need for DSA later.

 CONCEPTS USED:
 Second Largest   → single pass, two variables
 Frequency        → nested loops + visited array
 Is Sorted        → compare adjacent elements
 Left Rotate      → save first, shift left, place at end
 Move Zeros       → two-pointer / fill-position technique
*/
