// ============================================================
// 02 — Adult Checker  (YOUR PRACTICE CODE ✅)
// Topic   : if / else with logical operators
// Problem : Check if a person is an adult (age 18–60)
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18 && age <= 60) {
        cout << "You are an ADULT.\n";
    }
    else {
        cout << "You are NOT an adult.\n";
    }

    return 0;
}

/*
 SAMPLE RUNS:
 Input: 25  → You are an ADULT.
 Input: 15  → You are NOT an adult.
 Input: 65  → You are NOT an adult.

 WHAT YOU LEARNED:
 - && (AND) — both conditions must hold true together
 - age >= 18 && age <= 60  checks a RANGE in one condition

 MENTOR TIP:
 The else block also catches ages like 150 or -5.
 A more robust version would validate:
   if (age < 0 || age > 120) → "Invalid age!"
*/
