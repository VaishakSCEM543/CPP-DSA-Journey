// ============================================================
// 04 — Switch Case
// Topic   : switch statement
// Concept : Cleaner alternative to if-else for exact values
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- EXAMPLE 1: Day of the Week ---
    int day;
    cout << "Enter day number (1-7): ";
    cin >> day;

    switch (day) {
        case 1:  cout << "Monday\n";    break;
        case 2:  cout << "Tuesday\n";   break;
        case 3:  cout << "Wednesday\n"; break;
        case 4:  cout << "Thursday\n";  break;
        case 5:  cout << "Friday\n";    break;
        case 6:  cout << "Saturday\n";  break;
        case 7:  cout << "Sunday\n";    break;
        default: cout << "Invalid day! Enter 1-7.\n"; break;
    }

    // --- EXAMPLE 2: Basic Calculator ---
    int a, b;
    char op;
    cout << "\nEnter: num1 operator num2 (e.g. 5 + 3): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << "Result: " << a + b << "\n"; break;
        case '-': cout << "Result: " << a - b << "\n"; break;
        case '*': cout << "Result: " << a * b << "\n"; break;
        case '/':
            if (b == 0) cout << "Error: Division by zero!\n";
            else        cout << "Result: " << a / b << "\n";
            break;
        default:  cout << "Unknown operator!\n"; break;
    }

    return 0;
}

/*
 SAMPLE RUN:
 Enter day: 5
 Friday

 Enter: 10 * 4
 Result: 40

 CRITICAL RULE — ALWAYS USE break:
 Without break, code "falls through" to next case!

 case 1: cout << "One";    ← no break!
 case 2: cout << "Two";    ← this ALSO runs when input = 1 (BUG!)

 WHEN TO USE switch vs if-else:
 switch → single variable vs EXACT constant values (int, char)
 if-else → ranges, complex conditions, multiple variables
*/
