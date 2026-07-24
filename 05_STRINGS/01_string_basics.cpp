// ============================================================
// 01 — String Basics
// Topic   : string type in C++
// Concept : Access, modify, size, concatenation, getline
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- DECLARE & ACCESS ---
    string s = "Hello";

    cout << "Full string : " << s       << "\n";
    cout << "First char  : " << s[0]    << "\n";   // 'H'
    cout << "Last char   : " << s[4]    << "\n";   // 'o'
    cout << "Length      : " << s.size()<< "\n";   // 5

    // --- MODIFY CHARACTERS ---
    s[0] = 'J';
    cout << "After s[0]='J': " << s << "\n";       // "Jello"

    // --- CONCATENATION ---
    string a = "Hello";
    string b = " World";
    string c = a + b;
    cout << "Concatenated: " << c << "\n";          // "Hello World"

    // --- SUBSTRING ---
    // s.substr(startIndex, length)
    cout << "Substring   : " << c.substr(0, 5) << "\n";  // "Hello"
    cout << "Substring   : " << c.substr(6, 5) << "\n";  // "World"

    // --- LOOP THROUGH STRING ---
    string word = "DSA";
    cout << "\nLoop through '" << word << "': ";
    for (int i = 0; i < word.size(); i++) {
        cout << word[i] << "-";
    }
    cout << "\n";

    // --- FULL LINE INPUT (with spaces) ---
    string fullName;
    cout << "\nEnter your full name: ";
    cin.ignore();               // clear leftover newline
    getline(cin, fullName);
    cout << "Hello, " << fullName << "!\n";

    // --- COMPARE STRINGS ---
    string p = "apple", q = "banana";
    if (p == q)      cout << "Same\n";
    else if (p < q)  cout << p << " comes before " << q << "\n";  // alphabetical
    else             cout << p << " comes after "  << q << "\n";

    return 0;
}

/*
 KEY STRING FUNCTIONS:
 s.size()          → length of string
 s.substr(pos, len) → extract part of string
 s[i]              → access character at index i
 s + t             → concatenate two strings
 s == t            → compare (true/false)

 INPUT METHODS:
 cin >> s          → stops at whitespace ("Hello World" → "Hello")
 getline(cin, s)   → reads full line  ("Hello World" → "Hello World")

 STRINGS ARE LIKE CHAR ARRAYS:
 string s = "Hello";
 char arr[] = {'H','e','l','l','o','\0'};
 // These are similar — but string is much more convenient!
*/
