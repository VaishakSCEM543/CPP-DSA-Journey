// ============================================================
// 03 — Grading System  (YOUR PRACTICE CODE ✅ — Optimized)
// Topic   : else-if chains
// Problem : Print grade based on marks (school grading rules)
// ============================================================

/*
 GRADING RULES:
  Below 25   → F
  25  to 44  → E
  45  to 49  → D
  50  to 59  → C
  60  to 79  → B
  80  to 100 → A
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    // OPTIMIZED — once matched, rest of else-if chain is SKIPPED
    if      (marks < 0 || marks > 100) { cout << "Invalid marks!\n"; }
    else if (marks < 25)               { cout << "Grade: F\n"; }
    else if (marks <= 44)              { cout << "Grade: E\n"; }  // marks >= 25 is already implied
    else if (marks <= 49)              { cout << "Grade: D\n"; }  // marks >= 45 is already implied
    else if (marks <= 59)              { cout << "Grade: C\n"; }
    else if (marks <= 79)              { cout << "Grade: B\n"; }
    else                               { cout << "Grade: A\n"; }

    return 0;
}

/*
 SAMPLE RUNS:
 Input: 95  → Grade: A
 Input: 72  → Grade: B
 Input: 55  → Grade: C
 Input: 47  → Grade: D
 Input: 30  → Grade: E
 Input: 10  → Grade: F
 Input: 110 → Invalid marks!

 WHY OPTIMIZED?
 ❌ NAIVE:   if (marks >= 25 && marks <= 44) — re-checks >= 25 every time
 ✅ OPTIMIZED: else if (marks <= 44)         — >= 25 is ALREADY guaranteed
                                               by failing the previous if
*/
