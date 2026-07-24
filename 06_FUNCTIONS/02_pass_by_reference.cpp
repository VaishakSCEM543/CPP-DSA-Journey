// ============================================================
// 02 — Pass by Value vs Pass by Reference
// Topic   : How data is passed to functions
// Concept : Value (copy) vs Reference (original) vs Array
// ============================================================

#include <bits/stdc++.h>
using namespace std;

// ── PASS BY VALUE — gets a COPY, original safe ──────────────
void doubleByValue(int x) {
    x = x * 2;
    cout << "Inside byValue: x = " << x << "\n";  // 20
}

// ── PASS BY REFERENCE — gets the REAL variable ──────────────
void doubleByRef(int &x) {    // & means "give me the real thing"
    x = x * 2;
    cout << "Inside byRef: x = " << x << "\n";    // 20
}

// ── SWAP USING REFERENCE (classic example) ───────────────────
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// ── ARRAYS — ALWAYS PASS BY REFERENCE ───────────────────────
void doubleArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;          // changes the ORIGINAL array!
    }
}

// ── LARGE STRING — PASS BY CONST REFERENCE (best practice) ──
// & avoids copying   |   const prevents accidental modification
void printInfo(const string &name) {
    cout << "Name: " << name << " (length: " << name.size() << ")\n";
}

// ════════════════════════════════════════════════════════════
int main() {

    // --- BY VALUE ---
    int a = 10;
    doubleByValue(a);
    cout << "After byValue: a = " << a << "\n\n";  // STILL 10 — copy changed!

    // --- BY REFERENCE ---
    int b = 10;
    doubleByRef(b);
    cout << "After byRef: b = " << b << "\n\n";   // NOW 20 — original changed!

    // --- SWAP ---
    int x = 5, y = 8;
    cout << "Before swap: x=" << x << " y=" << y << "\n";
    swap(x, y);
    cout << "After swap : x=" << x << " y=" << y << "\n\n";

    // --- ARRAY (always reference) ---
    int arr[4] = {1, 2, 3, 4};
    cout << "Before doubleArray: ";
    for (int i = 0; i < 4; i++) cout << arr[i] << " ";
    cout << "\n";

    doubleArray(arr, 4);   // no & needed — arrays auto-pass by ref!

    cout << "After doubleArray : ";
    for (int i = 0; i < 4; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // --- CONST REFERENCE ---
    printInfo("Vaishnavi");

    return 0;
}

/*
 VISUAL SUMMARY:
 ┌──────────────────────────────────────────────────────────┐
 │  BY VALUE    main[a=10] → COPY → function[x=10]  (safe) │
 │  BY REF      main[a=10] ←────── function[a]    (shared) │
 │  ARRAY       always reference  (auto — no & needed)     │
 └──────────────────────────────────────────────────────────┘

 WHEN TO USE EACH:
 Pass by Value     → small types (int, char, bool) you don't want changed
 Pass by Reference → when you WANT to modify the original
 Const Reference   → large types (string, vector) to avoid copy BUT stay safe

 ARCHITECTURAL BENEFIT:
 Passing a large string by reference avoids copying its entire
 content into the function — saving memory and time.
*/
