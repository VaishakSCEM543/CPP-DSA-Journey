#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cin>> age;
    
    if(age>=18 && age <= 60 )
    {
        
        cout << "YOUARE AN ADULT" << endl; 
    }
    else
    {
            cout << "YOUARE not AN ADULT";
    }
    return 0;
}