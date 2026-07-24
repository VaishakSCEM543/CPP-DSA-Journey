// ============================================================
// 01 — For Loop
// Topic   : for loop
// Concept : Loops for a KNOWN number of iterations
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- BASIC FOR LOOP ---
    cout << "=== Count 1 to 5 ===\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n";

    // --- COUNT DOWN ---
    cout << "\n=== Countdown 5 to 1 ===\n";
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << "\n";

    // --- ONLY EVEN NUMBERS ---
    cout << "\n=== Even numbers 1 to 20 ===\n";
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    }
    cout << "\n";

    // --- SUM OF 1 TO N ---
    int n;
    cout << "\nEnter N to find sum 1 to N: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;               // same as: sum = sum + i
    }
    cout << "Sum = " << sum << "\n";

    // --- NESTED FOR LOOP (Multiplication Table) ---
    cout << "\n=== Multiplication Table (1-3) ===\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i * j << "\t";  // \t = tab space
        }
        cout << "\n";
    }

    return 0;
}

/*
 FOR LOOP ANATOMY:
 for ( init  ;  condition  ;  update )
        ↓          ↓           ↓
    int i=1     i <= 5       i++
    (once)    (each cycle)  (after each)

 SCOPE NOTE:
 Variable 'i' declared inside for() only EXISTS inside the loop.
 Trying to use it after the loop = compiler error.

 COMMON SHORTCUTS:
 i++   → i = i + 1   (increment by 1)
 i--   → i = i - 1   (decrement by 1)
 i += 2 → i = i + 2  (increment by 2)
 i *= 2 → i = i * 2  (double each time)
*/
