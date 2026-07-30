// ============================================================
// 04 — STL Set Basics
// Topic   : std::set and std::unordered_set
// Concept : Storing unique elements only
// ============================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
    // 1. WHAT IS A SET?
    // A set is a container that only stores UNIQUE elements.
    // If you try to insert duplicates, it ignores them!
    // std::set automatically sorts the elements as well.

    // DECLARATION
    set<int> st;

    // 2. INSERTING ELEMENTS
    st.insert(10);
    st.insert(5);
    st.insert(20);
    st.insert(10); // Duplicate! Will be ignored.
    st.insert(5);  // Duplicate! Will be ignored.

    // 3. SIZE
    cout << "Size of set: " << st.size() << " (Duplicates were ignored!)\n\n";

    // 4. ITERATING THROUGH A SET
    cout << "Elements in set (Notice they are sorted!):\n";
    for (auto it : st) {
        cout << it << " ";
    }
    cout << "\n\n";

    // 5. FAST SEARCHING
    // Checking if 20 exists in the set
    if (st.find(20) != st.end()) {
        cout << "20 is present in the set!\n";
    }

    // 6. DELETING AN ELEMENT
    st.erase(5);
    cout << "Removed 5. New size: " << st.size() << "\n\n";

    // 7. std::unordered_set
    // Just like unordered_map, this stores unique elements but does NOT sort them.
    // It is much faster (O(1) average time).
    unordered_set<int> uset;
    uset.insert(100);
    uset.insert(50);
    uset.insert(100); // Ignored
    
    cout << "Unordered set elements: ";
    for(auto it : uset) cout << it << " ";
    cout << "\n";

    return 0;
}

/*
 WHY USE SET?
 - When a question says "Find all unique numbers" or "Remove duplicates".
 - You can just dump all the array elements into a set, and boom—duplicates are gone.
 
 set VS unordered_set:
 - Use unordered_set for pure speed (O(1) time).
 - Use set if you need the unique elements to also be in sorted order (O(log N) time).
*/
