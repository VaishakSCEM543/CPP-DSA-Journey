# 🚀 C++ Complete Revision Notes
### *Your Personal Mentor's Handbook — Everything in One Place*

> **How to use:** Read top-to-bottom once. Then use as quick reference.
> Each concept has a ⚠️ Common Mistake and 💡 Pro Tip — never skip those!

---

## 📌 Chapter 1 — The C++ Program Skeleton

**Every single program you write starts with this. Memorize it.**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your logic goes here
    return 0;
}
```

### Line-by-Line Breakdown

| Line | What it does | Mentor Note |
|---|---|---|
| `#include <bits/stdc++.h>` | Includes ALL standard libraries | Perfect for learning & competitive programming |
| `using namespace std;` | Write `cout` instead of `std::cout` | Always use this while learning |
| `int main()` | CPU starts here — entry point | Every program MUST have exactly one `main()` |
| `return 0;` | Tells OS "program ended successfully" | Always include — it's professional habit |

> [!TIP]
> `#include <bits/stdc++.h>` is your best friend during learning and competitive programming. In professional software you'll use specific headers — but that's much later!

---

## 📌 Chapter 2 — Input & Output

### Printing — `cout`

```cpp
cout << "Hello World";              // Print text
cout << "Value: " << a;            // Print a variable
cout << "A=" << a << " B=" << b;   // Chain multiple values
cout << "Line 1\nLine 2";          // \n = newline
```

### Taking Input — `cin`

```cpp
cin >> a;           // One value
cin >> a >> b;      // Two values at once (space-separated)
```

### Full Line Input — `getline`

```cpp
string name;
getline(cin, name);    // Reads the ENTIRE line including spaces
```

> [!CAUTION]
> `cin >> s` **STOPS at whitespace!**
> Input: `"Hey Striver"` → `s` stores only `"Hey"`
> Use `getline(cin, s)` when you need the full sentence.

### ⚡ The `\n` vs `endl` Rule — CRITICAL

```cpp
cout << "Hello" << endl;    // ❌ SLOW — forces buffer flush every time
cout << "Hello" << "\n";    // ✅ FAST — just adds a newline
```

> [!IMPORTANT]
> **Always use `"\n"` not `endl`.** In competitive programming, using `endl` in a loop with thousands of outputs will cause Time Limit Exceeded (TLE). Build this habit from Day 1.

---

## 📌 Chapter 3 — Data Types & Memory

Think of data types as **differently-sized boxes** for different values.

### Core Data Types

| Type | Size | Range | Use When |
|---|---|---|---|
| `int` | 4 bytes | −2×10⁹ to 2×10⁹ | Default — counts, marks, age |
| `long long` | 8 bytes | −9×10¹⁸ to 9×10¹⁸ | Numbers bigger than ~10⁹ |
| `float` | 4 bytes | 7 decimal places | Avoid — use `double` |
| `double` | 8 bytes | 15 decimal places | All decimal calculations |
| `char` | 1 byte | 256 ASCII characters | Single character: `'A'`, `'z'` |
| `bool` | 1 byte | `true` / `false` | Yes/No conditions |
| `string` | varies | Any text | Words and sentences |

```cpp
int age        = 20;
long long pop  = 8000000000LL;    // Note the 'LL' suffix!
double pi      = 3.14159265;
char grade     = 'A';             // Single quotes for char!
bool passed    = true;
string name    = "Vaishnavi";     // Double quotes for string!
```

### The `long long` Switch Rule

```
Your number can exceed 10^9?  →  Use long long, not int.
```

```cpp
int a         = 1000000000;      // 10^9 — okay
long long b   = 10000000000LL;   // 10^10 — MUST be long long
```

> [!WARNING]
> **`char` uses single quotes, `string` uses double quotes — always!**
> ```cpp
> char c   = "A";   // ❌ WRONG — compiler error
> char c   = 'A';   // ✅ CORRECT
> string s = 'A';   // ❌ WRONG — compiler error
> string s = "A";   // ✅ CORRECT
> ```

---

## 📌 Chapter 4 — Conditional Statements

### Basic Structure

```cpp
if (condition1) {
    // Runs if condition1 is TRUE
}
else if (condition2) {
    // Runs if condition1 FALSE AND condition2 TRUE
}
else {
    // Runs if ALL conditions above were FALSE
}
```

### ❌ Naive vs ✅ Optimized — School Grading Example

```cpp
// ❌ NAIVE — CPU checks EVERY if block unnecessarily
if (marks < 25)                  { cout << "F"; }
if (marks >= 25 && marks <= 44)  { cout << "E"; }  // re-checks >= 25!
if (marks >= 45 && marks <= 49)  { cout << "D"; }  // re-checks >= 45!

// ✅ OPTIMIZED — Once matched, rest are SKIPPED entirely
if      (marks < 25)  { cout << "F"; }
else if (marks <= 44) { cout << "E"; }  // implicitly marks >= 25
else if (marks <= 49) { cout << "D"; }  // implicitly marks >= 45
else if (marks <= 59) { cout << "C"; }
else if (marks <= 79) { cout << "B"; }
else                  { cout << "A"; }
```

### Logical Operators

| Operator | Meaning | Example |
|---|---|---|
| `&&` | AND — BOTH must be true | `age >= 18 && age <= 60` |
| `\|\|` | OR — at least ONE must be true | `day == 1 \|\| day == 7` |
| `!` | NOT — flips true to false | `!isPassed` |

### Switch Statement — For Exact Value Comparisons

```cpp
int day = 3;
switch (day) {
    case 1:  cout << "Monday";    break;
    case 2:  cout << "Tuesday";   break;
    case 3:  cout << "Wednesday"; break;
    default: cout << "Invalid!";  break;
}
```

> [!CAUTION]
> **NEVER forget `break;`!** Without it, code "falls through" into the next case.
> ```cpp
> case 1: cout << "One";  // ← No break!
> case 2: cout << "Two";  // Also runs when case = 1! BUG!
> ```

---

## 📌 Chapter 5 — Arrays

An array = **multiple values of the SAME type under one name**, stored side-by-side in memory.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
//  index:    [0] [1] [2] [3] [4]

cout << arr[0];    // 10  (first)
cout << arr[4];    // 50  (last)
arr[2] = 99;       // Modify element
```

### Memory Layout

```
Address:  1000  1004  1008  1012  1016
          ┌─────┬─────┬─────┬─────┬─────┐
arr  →    │ 10  │ 20  │ 30  │ 40  │ 50  │
          └─────┴─────┴─────┴─────┴─────┘
Index:    [ 0 ] [ 1 ] [ 2 ] [ 3 ] [ 4 ]
```
*Each `int` = 4 bytes. Stored consecutively — why arrays are FAST!*

> [!WARNING]
> **Zero-based indexing!** Array of size `n` → indices `0` to `n-1`.
> `arr[5]` on a size-5 array = **undefined behavior** (nasty bug!).

### Loop Through Array

```cpp
int arr[5] = {10, 20, 30, 40, 50};
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}
// Output: 10 20 30 40 50
```

### 2D Arrays — Rows & Columns

```cpp
int matrix[2][3] = {
    {1, 2, 3},   // Row 0
    {4, 5, 6}    // Row 1
};
cout << matrix[1][2];   // Row 1, Column 2 → Output: 6
```

---

## 📌 Chapter 6 — Strings

A `string` is a sequence of characters. Works like a `char` array.

```cpp
string s = "Hello";
cout << s[0];        // 'H'     (access by index)
cout << s.size();    // 5       (length)
s[0] = 'J';          // Direct modify → s = "Jello"
```

### String Operations

```cpp
string a = "Hello", b = " World";
string c = a + b;              // Concatenation → "Hello World"
cout << c.substr(0, 5);        // Substring → "Hello"
cout << c.size();              // Length → 11

// Loop through string
for (int i = 0; i < s.size(); i++) {
    cout << s[i];
}
```

### Input Methods Compared

```cpp
// Method 1 — cin (stops at space)
string s;
cin >> s;                // Input "John Doe" → s = "John" only ❌

// Method 2 — getline (reads full line)
string s;
getline(cin, s);         // Input "John Doe" → s = "John Doe" ✅
```

---

## 📌 Chapter 7 — Loops

Loops = **repeat a block of code**. Three types, each with a purpose.

### 1. `for` Loop — KNOWN number of iterations

```cpp
for (int i = 0; i < 5; i++) {
    cout << i << " ";
}
// Output: 0 1 2 3 4
```

```
for ( init  ;  condition  ;  update )
       ↓           ↓           ↓
   int i=0      i < 5        i++
   (once)    (check each)  (after each)
```

### 2. `while` Loop — UNKNOWN number of iterations

```cpp
int n = 12345;
while (n > 0) {
    cout << n % 10 << " ";   // Print last digit
    n /= 10;                  // Remove last digit
}
// Output: 5 4 3 2 1
```
> "Check → Execute → Check → Execute → ..."

### 3. `do-while` Loop — Runs AT LEAST ONCE

```cpp
int choice;
do {
    cout << "Menu: 1=Play  0=Quit: ";
    cin >> choice;
} while (choice == 1);
```
> "Execute → Check → Execute again if true → ..."

### Comparison Table

| Feature | `for` | `while` | `do-while` |
|---|---|---|---|
| Best for | Known count | Unknown count | Must run once |
| Check order | BEFORE body | BEFORE body | AFTER body |
| Typical use | Print 1–100 | Read until 0 | Menu programs |

### Nested Loops

```cpp
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        cout << "* ";
    }
    cout << "\n";
}
// Output:
// * * *
// * * *
// * * *
```

---

## 📌 Chapter 8 — Functions

Function = **a named, reusable block of code**.

```cpp
// Define the function
int add(int a, int b) {
    return a + b;
}

int main() {
    int result = add(5, 3);   // Call it
    cout << result;            // Output: 8
    return 0;
}
```

### Pass by Value vs Pass by Reference

```cpp
// PASS BY VALUE — gets a COPY, original unchanged
void doubleIt(int x) {
    x = x * 2;                // Only the copy changes
}

// PASS BY REFERENCE — gets the ACTUAL variable
void doubleItRef(int &x) {   // & means "reference"
    x = x * 2;                // Original IS changed
}

int main() {
    int a = 5;
    doubleIt(a);       // a is STILL 5 — copy was changed
    doubleItRef(a);    // a is NOW 10 — original changed
}
```

```
By Value:     main [a=5] → copy → function [x=5]   (two separate boxes)
By Reference: main [a=5] ←────── function [x]       (same box, shared!)
```

### The Array Exception — Always by Reference!

```cpp
void change(int arr[]) {
    arr[0] = 999;      // Changes the ORIGINAL array in main()!
}
```

> [!IMPORTANT]
> Arrays **always** pass by reference in C++ — even without `&`. Any change inside the function affects the original. This is because arrays decay to pointers when passed.

---

## 📌 Chapter 7 — Pointers & Dynamic Memory

A **pointer** is a variable that stores the memory address of another variable.

### 1. The Symbols (`&` and `*`)

* `&` (Address-of operator): Gives you the memory address where a variable is stored.
* `*` (Dereference operator): When used on an address, gives you the value stored at that address.

```cpp
int a = 10;
int* ptr = &a;  // ptr now holds the address of a

cout << &a;   // Ex: 0x7ffeeb8
cout << ptr;  // Ex: 0x7ffeeb8
cout << *ptr; // 10
```

### 2. Arrays are Pointers in Disguise

In C++, the name of an array is actually a pointer to its first element.

```cpp
int arr[5] = {10, 20, 30, 40, 50};
cout << arr;      // Prints memory address of arr[0]
cout << *arr;     // Prints 10 (which is arr[0])
cout << *(arr+1); // Prints 20 (which is arr[1])
```
This is why `arr[i]` is exactly the same as `*(arr + i)`.

---

## ⚡ Quick Reference — Never Make These Mistakes

| ❌ Wrong | ✅ Correct | Why |
|---|---|---|
| `cout << x << endl` | `cout << x << "\n"` | `endl` is slow |
| `char c = "A"` | `char c = 'A'` | Single quotes for char |
| `arr[5]` on size-5 array | `arr[4]` | Last index is n-1 |
| `if (a = 5)` | `if (a == 5)` | `=` assigns, `==` compares |
| `cin >> s` for full name | `getline(cin, s)` | `cin` stops at space |
| No `break` in switch | Always add `break;` | Fall-through = bug |
| `int` for huge numbers | `long long` | Use when > 10⁹ |

---

## 🗺️ Your Learning Roadmap

```
PHASE 1 — FUNDAMENTALS (You are here! ✅)
  ✅ Program Skeleton & Boilerplate
  ✅ cin / cout / getline
  ✅ Variables & Data Types
  ✅ if / else if / else
  ✅ Switch Case
  ✅ Loops (for, while, do-while)
  ✅ Arrays (1D & 2D)
  ✅ Strings
  ✅ Functions

PHASE 2 — INTERMEDIATE
  ✅ Pointers & References
  🔄 STL — vector, map, set, pair
  ⏳ Recursion

PHASE 3 — DSA BEGINS 🚀
  ⏳ Sorting Algorithms
  ⏳ Binary Search
  ⏳ Linked Lists
  ⏳ Stacks & Queues
  ⏳ Trees & Binary Trees
  ⏳ Graphs (BFS, DFS)
  ⏳ Dynamic Programming
```

---

## 💡 Mentor's Golden Rules

1. **Write code every single day** — 20 minutes beats 3 hours once a week
2. **Read error messages carefully** — compiler tells you EXACTLY what's wrong
3. **Understand WHY before HOW** — you'll never forget what you understand
4. **Always test edge cases** — What if input is 0? Negative? Very large?
5. **`"\n"` not `endl`** — start this habit NOW, thank yourself later
6. **Compile often** — write 5 lines, compile, fix, then write 5 more

---

*📅 Revision notes for your C++ & DSA journey | You've got this! 🚀*
