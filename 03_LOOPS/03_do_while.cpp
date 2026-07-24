// ============================================================
// 03 — Do-While Loop
// Topic   : do-while loop
// Concept : Runs the body AT LEAST ONCE before checking condition
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- BASIC DO-WHILE ---
    cout << "=== Count 1 to 5 ===\n";
    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << "\n";

    // --- CLASSIC USE CASE: Menu-Driven Program ---
    cout << "\n=== Simple Calculator Menu ===\n";

    int choice;
    do {
        cout << "\n1. Add\n2. Subtract\n3. Multiply\n0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;

            if      (choice == 1) cout << "Result: " << a + b << "\n";
            else if (choice == 2) cout << "Result: " << a - b << "\n";
            else if (choice == 3) cout << "Result: " << a * b << "\n";
        }
        else if (choice != 0) {
            cout << "Invalid choice!\n";
        }

    } while (choice != 0);   // keep looping until user enters 0

    cout << "Goodbye!\n";
    return 0;
}

/*
 KEY DIFFERENCE vs while:

 while (condition) {      do {
     body                     body
 }                        } while (condition);

 while  → checks BEFORE  → body may NEVER run
 do-while → checks AFTER → body runs AT LEAST ONCE

 BEST USE CASE:
 Menu-driven programs — because you must show the menu
 at least once before asking for a choice.

 COMPARISON TABLE:
 ┌─────────────┬───────────────┬─────────────┬──────────────┐
 │             │  for          │  while      │  do-while    │
 ├─────────────┼───────────────┼─────────────┼──────────────┤
 │ Use when    │ Known count   │ Unknown cnt │ Must run 1x  │
 │ Checks      │ Before        │ Before      │ After        │
 │ Min runs    │ 0             │ 0           │ 1 (always)   │
 └─────────────┴───────────────┴─────────────┴──────────────┘
*/
