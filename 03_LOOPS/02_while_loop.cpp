// ============================================================
// 02 — While Loop
// Topic   : while loop
// Concept : Loop for UNKNOWN number of iterations
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- BASIC WHILE LOOP ---
    cout << "=== Count 1 to 5 ===\n";
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;              // Don't forget! Without this → infinite loop
    }
    cout << "\n";

    // --- REVERSE DIGITS OF A NUMBER ---
    cout << "\n=== Reverse Digits ===\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        int lastDigit = num % 10;     // Extract last digit
        cout << lastDigit;
        num /= 10;                    // Remove last digit
    }
    cout << "\n";

    // --- SUM UNTIL USER ENTERS 0 ---
    cout << "\n=== Sum Until 0 (enter 0 to stop) ===\n";
    int val, total = 0;
    cin >> val;
    while (val != 0) {
        total += val;
        cin >> val;
    }
    cout << "Total = " << total << "\n";

    return 0;
}

/*
 WHILE VS FOR:
 Use FOR  when you KNOW how many times to loop → for(i=0; i<n; i++)
 Use WHILE when you DON'T KNOW           →       while(condition)

 FLOW:
 ┌──────────────────────────────┐
 │  while (condition) {         │
 │      ← check condition first │
 │      if FALSE → exit loop    │
 │      if TRUE  → run body     │
 │      → go back to check      │
 │  }                           │
 └──────────────────────────────┘

 WARNING — INFINITE LOOP:
 int i = 1;
 while (i <= 5) {
     cout << i;
     // forgot i++ → i never changes → runs FOREVER!
 }
 Press Ctrl+C in terminal to stop an infinite loop.
*/
