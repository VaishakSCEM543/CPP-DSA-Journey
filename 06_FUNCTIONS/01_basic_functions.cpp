// ============================================================
// 01 — Basic Functions
// Topic   : Defining and calling functions
// Concept : Return types, parameters, modularity
// ============================================================

#include <bits/stdc++.h>
using namespace std;

// ── FUNCTION WITH NO RETURN (void) ──────────────────────────
void greet(string name) {
    cout << "Hello, " << name << "! Welcome to C++.\n";
}

// ── FUNCTION THAT RETURNS A VALUE ───────────────────────────
int add(int a, int b) {
    return a + b;
}

double average(int a, int b, int c) {
    return (a + b + c) / 3.0;    // 3.0 forces decimal division!
}

// ── FUNCTION WITH NO PARAMETERS ─────────────────────────────
void printLine() {
    cout << "─────────────────────────────\n";
}

// ── CHECKING EVEN OR ODD ─────────────────────────────────────
bool isEven(int n) {
    return (n % 2 == 0);   // returns true if even, false if odd
}

// ── FACTORIAL (builds on loops inside a function) ────────────
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// ════════════════════════════════════════════════════════════
int main() {

    // CALLING void function
    greet("Vaishnavi");
    printLine();

    // CALLING function with return value
    int sum = add(5, 8);
    cout << "Sum = " << sum << "\n";
    cout << "Average = " << average(10, 20, 30) << "\n";

    printLine();

    // CALLING bool function
    int num = 7;
    if (isEven(num)) cout << num << " is Even\n";
    else             cout << num << " is Odd\n";

    printLine();

    // CALLING factorial
    cout << "5! = " << factorial(5) << "\n";    // 120
    cout << "6! = " << factorial(6) << "\n";    // 720

    return 0;
}

/*
 FUNCTION ANATOMY:
 ┌──────────────────────────────────────────────┐
 │  returnType  functionName ( parameters ) {   │
 │      // body                                  │
 │      return value;  ← skip if void           │
 │  }                                            │
 └──────────────────────────────────────────────┘

 RETURN TYPES:
 void   → returns nothing
 int    → returns an integer
 double → returns a decimal
 bool   → returns true or false
 string → returns a string

 WHY USE FUNCTIONS?
 1. Reusability  — write once, call many times
 2. Readability  — code is organized and named
 3. Debugging    — isolate and fix one function at a time
 4. Modularity   — split big problems into small pieces

 RULE: Define functions ABOVE main(), or declare them above
 and define below (called forward declaration).
*/
