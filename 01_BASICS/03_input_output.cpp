// ============================================================
// 03 — Input & Output
// Topic   : cin, cout, getline, \n vs endl
// Concept : Reading and printing data
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- SINGLE VALUE INPUT ---
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old.\n";

    // --- MULTIPLE VALUES IN ONE LINE ---
    int a, b;
    cout << "Enter two numbers (space-separated): ";
    cin >> a >> b;
    cout << "Sum = " << a + b << "\n";

    // --- STRING WITH SPACES ---
    // cin >> stops at space — use getline for full line
    string fullName;
    cout << "Enter your full name: ";
    cin.ignore();           // Clear the leftover newline from previous cin
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!\n";

    return 0;
}

/*
 SAMPLE RUN:
 Enter your age: 20
 You are 20 years old.
 Enter two numbers: 5 8
 Sum = 13
 Enter your full name: Vaishnavi Sharma
 Hello, Vaishnavi Sharma!

 KEY DIFFERENCE:
 cin >> name       →  stops at SPACE   → reads "John" from "John Doe"
 getline(cin, name) →  reads FULL LINE → reads "John Doe"

 PERFORMANCE TIP:
 cout << "\n"     FAST  ✅  (just a newline character)
 cout << endl     SLOW  ❌  (newline + buffer flush = expensive)
*/
