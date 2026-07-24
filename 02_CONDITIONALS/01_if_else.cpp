// ============================================================
// 01 — If / Else Basics
// Topic   : Conditional statements
// Concept : if, else if, else, logical operators
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    // --- BASIC IF / ELSE ---
    if (num > 0) {
        cout << num << " is POSITIVE\n";
    }
    else if (num < 0) {
        cout << num << " is NEGATIVE\n";
    }
    else {
        cout << "The number is ZERO\n";
    }

    // --- LOGICAL OPERATORS ---
    int x = 15;

    if (x > 10 && x < 20) {              // AND — both must be true
        cout << x << " is between 10 and 20\n";
    }

    if (x < 5 || x > 10) {               // OR — at least one must be true
        cout << x << " is outside range 5-10\n";
    }

    bool isPassed = false;
    if (!isPassed) {                      // NOT — flips the condition
        cout << "Student has not passed\n";
    }

    return 0;
}

/*
 LOGICAL OPERATORS QUICK GUIDE:
 &&  (AND)  →  BOTH conditions must be true
 ||  (OR)   →  AT LEAST ONE must be true
 !   (NOT)  →  Flips true↔false

 COMPARISON OPERATORS:
 ==  equal to
 !=  not equal to
 >   greater than
 <   less than
 >=  greater than or equal
 <=  less than or equal

 CLASSIC BUG:
 if (a = 5)  ← WRONG — this ASSIGNS 5 to a (always true!)
 if (a == 5) ← CORRECT — this COMPARES a with 5
*/
