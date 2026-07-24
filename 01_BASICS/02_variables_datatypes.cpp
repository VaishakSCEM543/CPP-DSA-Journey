// ============================================================
// 02 — Variables & Data Types
// Topic   : int, long long, double, char, bool, string
// Concept : Choosing the right type for the right job
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- INTEGER TYPES ---
    int age       = 20;                    // 4 bytes  | range: ~-2B to 2B
    long long pop = 8000000000LL;          // 8 bytes  | range: ~-9×10^18 to 9×10^18
                                           // Note: always add LL suffix for large numbers!

    // --- DECIMAL TYPES ---
    float  gpa1 = 3.7f;                    // 4 bytes | 7 decimal digits (avoid in practice)
    double gpa2 = 3.141592653589793;       // 8 bytes | 15 decimal digits (prefer this!)

    // --- CHARACTER TYPE ---
    char grade = 'A';                      // 1 byte  | single quotes ONLY
    char letter = 65;                      // 65 is ASCII for 'A' — same thing!

    // --- BOOLEAN TYPE ---
    bool isPassed  = true;
    bool isFailed  = false;

    // --- STRING TYPE ---
    string name = "Vaishnavi";             // Double quotes ONLY
    string city = "Hyderabad";

    // --- PRINTING ALL ---
    cout << "Age       : " << age       << "\n";
    cout << "Population: " << pop       << "\n";
    cout << "GPA       : " << gpa2      << "\n";
    cout << "Grade     : " << grade     << "\n";
    cout << "Passed?   : " << isPassed  << "\n";  // prints 1 (true) or 0 (false)
    cout << "Name      : " << name      << "\n";

    return 0;
}

/*
 OUTPUT:
 Age       : 20
 Population: 8000000000
 GPA       : 3.14159
 Grade     : A
 Passed?   : 1
 Name      : Vaishnavi

 MEMORY SIZE RULE:
 If number > 10^9  →  use long long (not int)

 COMMON MISTAKES:
 char c = "A"    ← WRONG (double quotes = string)
 char c = 'A'    ← CORRECT (single quotes = char)
*/
