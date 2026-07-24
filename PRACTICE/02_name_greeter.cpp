// ============================================================
// PRACTICE — Name Greeter  (STRING PRACTICE ✅)
// Date    : July 2026
// Concept : string, cin, cout
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    string name;
    cout << "What's your name? \n";
    cin >> name;
    cout << "Hey " << name << ", you are a good boy!\n";

    return 0;
}

/*
 SAMPLE RUN:
 What's your name?
 Vaishnavi
 Hey Vaishnavi, you are a good boy!

 WHAT YOU PRACTICED:
 - string data type
 - cin with string
 - cout with string variable

 NOTE FOR IMPROVEMENT:
 To support full names with spaces, use getline:
   cin.ignore();
   getline(cin, name);
*/
