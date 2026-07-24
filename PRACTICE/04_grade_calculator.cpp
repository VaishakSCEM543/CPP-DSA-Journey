// ============================================================
// PRACTICE — Grade Calculator  (IF-ELSE CHAIN PRACTICE ✅)
// Date    : July 2026
// Concept : optimized else-if chain
// ============================================================

/*
 PROBLEM STATEMENT:
 A school has the following grading rules:
  a. Below 25  → F
  b. 25 to 44  → E
  c. 45 to 49  → D
  d. 50 to 59  → C
  e. 60 to 79  → B
  f. 80 to 100 → A
 Ask user to enter marks and print the corresponding grade.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int marks;
    cout << "Enter marks (0-100): ";
    cin >> marks;

    if      (marks < 0 || marks > 100) { cout << "Invalid marks!\n"; }
    else if (marks < 25)               { cout << "Grade: F\n"; }
    else if (marks <= 44)              { cout << "Grade: E\n"; }
    else if (marks <= 49)              { cout << "Grade: D\n"; }
    else if (marks <= 59)              { cout << "Grade: C\n"; }
    else if (marks <= 79)              { cout << "Grade: B\n"; }
    else                               { cout << "Grade: A\n"; }

    return 0;
}

/*
 SAMPLE RUNS:
 Input: 92  → Grade: A
 Input: 73  → Grade: B
 Input: 53  → Grade: C
 Input: 48  → Grade: D
 Input: 33  → Grade: E
 Input: 10  → Grade: F
 Input: 101 → Invalid marks!

 KEY INSIGHT — WHY else if IS BETTER:
 else if (marks <= 44) has an IMPLICIT lower bound.
 If we reach this line, marks >= 25 is ALREADY guaranteed
 because the previous if(marks < 25) was FALSE.
 No need to write: marks >= 25 && marks <= 44
*/
