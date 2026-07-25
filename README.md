<div align="center">

# 🧠 C++ & DSA Journey
### From Zero → Problem Solver

[![Language](https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)](https://isocpp.org/)
[![Started](https://img.shields.io/badge/Started-July%202026-blueviolet?style=for-the-badge)](/)
[![Status](https://img.shields.io/badge/Status-Active%20Learning-brightgreen?style=for-the-badge)](/)
[![IDE](https://img.shields.io/badge/IDE-VS%20Code-007ACC?style=for-the-badge&logo=visual-studio-code)](https://code.visualstudio.com/)

> *"Every expert was once a beginner. Every pro was once an amateur."*

</div>

---

## 👋 About This Repository

This is my personal C++ and Data Structures & Algorithms learning journey — documented from **Day 1**.

Every folder contains:
- 📝 Clean, well-commented code examples
- 💡 Concept notes with common mistakes
- ✅ My own practice problems

I'm learning from structured resources and building this as a reference I can grow with.

---

## 📁 Repository Structure

```
📦 CPP-DSA-Journey
│
├── 📒 NOTES/
│   └── CPP_Master_Notes.md        ← Complete revision notes (all topics)
│
├── 📂 01_BASICS/
│   ├── 01_hello_world.cpp
│   ├── 02_variables_datatypes.cpp
│   └── 03_input_output.cpp
│
├── 📂 02_CONDITIONALS/
│   ├── 01_if_else.cpp
│   ├── 02_adult_check.cpp
│   ├── 03_grading_system.cpp
│   └── 04_switch_case.cpp
│
├── 📂 03_LOOPS/
│   ├── 01_for_loop.cpp
│   ├── 02_while_loop.cpp
│   └── 03_do_while.cpp
│
├── 📂 04_ARRAYS/
│   ├── 01_1d_arrays.cpp
│   ├── 02_2d_arrays.cpp
│   ├── 03_array_operations.cpp
│   └── 04_array_problems.cpp
│
├── 📂 05_STRINGS/
│   └── 01_string_basics.cpp
│
├── 📂 06_FUNCTIONS/
│   ├── 01_basic_functions.cpp
│   └── 02_pass_by_reference.cpp
│
├── 📂 07_POINTERS/
│   ├── 01_pointers_basics.cpp
│   └── 02_pointers_and_arrays.cpp
│
└── 📂 PRACTICE/
    ├── 01_sum_of_two.cpp
    ├── 02_name_greeter.cpp
    ├── 03_adult_checker.cpp
    └── 04_grade_calculator.cpp
```

---

## 📈 Progress Tracker

### Phase 1 — Fundamentals
| Topic | Status |
|---|:---:|
| Program Skeleton & Boilerplate | ✅ Done |
| Variables & Data Types | ✅ Done |
| cin / cout / getline | ✅ Done |
| if / else if / else | ✅ Done |
| Switch Case | ✅ Done |
| For Loop | ✅ Done |
| While Loop | ✅ Done |
| Do-While Loop | ✅ Done |
| Arrays (1D & 2D) | ✅ Done |
| Strings | ✅ Done |
| Functions | ✅ Done |

### Phase 2 — Intermediate
| Topic | Status |
|---|:---:|
| Pointers & References | ✅ Done |
| STL — vector, map, set | 🔄 Up Next |
| Recursion | ⏳ Pending |

### Phase 3 — DSA
| Topic | Status |
|---|:---:|
| Sorting Algorithms | ⏳ Pending |
| Binary Search | ⏳ Pending |
| Linked Lists | ⏳ Pending |
| Stacks & Queues | ⏳ Pending |
| Trees & Binary Trees | ⏳ Pending |
| Graphs — BFS & DFS | ⏳ Pending |
| Dynamic Programming | ⏳ Pending |

---

## ⚡ Quick Revision — Cheat Sheet

```cpp
// THE BOILERPLATE — memorize this
#include <bits/stdc++.h>
using namespace std;
int main() {
    // logic here
    return 0;
}
```

```cpp
// DATA TYPES AT A GLANCE
int a       = 42;            // 4 bytes  | up to ~2×10⁹
long long b = 9999999999LL;  // 8 bytes  | up to ~9×10¹⁸
double pi   = 3.14159;       // 8 bytes  | 15 decimal digits
char grade  = 'A';           // 1 byte   | single quotes!
bool flag   = true;          // 1 byte   | true or false
string name = "Vaish";       // variable | double quotes!
```

```cpp
// ALWAYS \n, NEVER endl in loops
cout << "Fast output\n";     // ✅ Fast
cout << "Slow output" << endl; // ❌ Slow (flushes buffer)
```

---

## 🛠️ Setup & Running Code

**Compiler:** GCC (MinGW) via g++

```bash
# Compile
g++ filename.cpp -o output

# Run (Windows — avoids AppLocker issues)
g++ filename.cpp -o C:/Users/YourName/output && C:/Users/YourName/output
```

**IDE:** VS Code with Code Runner extension

---

## 📚 Resources I'm Using

- 📺 YouTube structured C++ course
- 📖 These self-written notes (this repo!)
- 🧩 Practice problems built from scratch

---

<div align="center">

**⭐ If this repo helped you, consider giving it a star!**

*Learning in public — one commit at a time 🚀*

</div>
