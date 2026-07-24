// ============================================================
// PRACTICE — Adult Checker  (IF-ELSE PRACTICE ✅)
// Date    : July 2026
// Concept : if / else, logical operators (&&)
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
 Input: 70  → You are NOT an adult.

 WHAT YOU PRACTICED:
 - if / else conditional structure
 - && (AND) logical operator
 - Checking a range (age between 18 and 60)
*/
