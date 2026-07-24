// ============================================================
// 02 — 2D Arrays
// Topic   : Two-dimensional arrays (matrices)
// Concept : Rows & columns, nested loops, matrix operations
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {

    // --- DECLARE & INITIALIZE ---
    int matrix[2][3] = {
        {1, 2, 3},     // Row 0
        {4, 5, 6}      // Row 1
    };

    // --- ACCESS ELEMENTS ---
    cout << "Row 0, Col 1 = " << matrix[0][1] << "\n";   // 2
    cout << "Row 1, Col 2 = " << matrix[1][2] << "\n";   // 6

    // --- PRINT FULL MATRIX ---
    cout << "\n=== Matrix (2x3) ===\n";
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << "\t";
        }
        cout << "\n";
    }

    // --- USER INPUT MATRIX ---
    int r, c;
    cout << "\nEnter rows and columns: ";
    cin >> r >> c;

    int mat[10][10];    // max 10x10
    cout << "Enter " << r * c << " elements:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    cout << "\nYour Matrix:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}

/*
 VISUALIZE AS A TABLE:
           Col0  Col1  Col2
  Row0  →  [ 1 ] [ 2 ] [ 3 ]
  Row1  →  [ 4 ] [ 5 ] [ 6 ]

 ACCESS: matrix[row][col]
 → matrix[1][2] = 6  (row 1, col 2)

 HOW IT'S STORED IN MEMORY (Row-major order):
 [1][2][3][4][5][6]  ← all in one line! Row0 then Row1

 REAL-WORLD USES:
 - Image pixels (2D grid of color values)
 - Spreadsheet data
 - Game board (chess, tic-tac-toe)
 - Graph adjacency matrix
*/
