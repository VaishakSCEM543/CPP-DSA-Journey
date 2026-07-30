// ============================================================
// 03 — STL Map Basics
// Topic   : std::map and std::unordered_map
// Concept : Key-Value pairs (Hashmaps)
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. WHAT IS A MAP?
    // A map stores elements in key-value pairs. 
    // It is exactly like a Python Dictionary.
    // In std::map, the keys are automatically sorted!

    // DECLARATION
    map<string, int> mpp;

    // 2. INSERTING ELEMENTS
    mpp["Vaishak"] = 95;   // Vaishak scored 95
    mpp["Rohan"] = 80;
    mpp["Aman"] = 90;
    
    // You can also use insert()
    mpp.insert({"Zoya", 99});

    // 3. ACCESSING ELEMENTS
    cout << "Vaishak's score is: " << mpp["Vaishak"] << "\n\n";

    // 4. ITERATING THROUGH A MAP
    cout << "All scores (Sorted alphabetically by name):\n";
    for (auto it : mpp) {
        // it.first = Key (Name)
        // it.second = Value (Score)
        cout << it.first << " : " << it.second << "\n";
    }
    cout << "\n";

    // 5. CHECKING IF A KEY EXISTS
    if (mpp.find("Rohan") != mpp.end()) {
        cout << "Rohan is present in the map!\n";
    } else {
        cout << "Rohan is not found.\n";
    }

    // 6. std::unordered_map
    // unordered_map is EXACTLY the same, but it does NOT sort the keys.
    // Because it doesn't sort, it is MUCH FASTER (O(1) time complexity).
    unordered_map<int, int> freq;
    
    // Most common use-case for maps: Counting frequencies!
    int arr[] = {1, 2, 2, 3, 1, 1, 4};
    for(int i = 0; i < 7; i++) {
        freq[arr[i]]++; // Instantly counts how many times a number appears
    }
    
    cout << "\nFrequency of 1 is: " << freq[1] << "\n";

    return 0;
}

/*
 WHY USE MAP?
 - Counting frequency of array elements in O(N) time.
 - Fast lookups (instead of looping through an array to find something, use a map).
 
 map VS unordered_map:
 - Use unordered_map 90% of the time because it is O(1) average time.
 - Use map only when you specifically need the keys to be sorted (O(log N) time).
*/
