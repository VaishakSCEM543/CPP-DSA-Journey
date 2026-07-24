#include <bits/stdc++.h>
using namespace std;

/*
90-100 --- A
80-90 ----B
70-80 ---- c
*/

int main()
{
    int mark;
    cin>> mark;
    
    if(mark>=91&&mark<=100 )
    {
        
       cout << "grade a";
       
    }
    else if(mark>=81&&mark<=90)
    {
         cout << "grade b";   
    }
    else if(mark>=71&&mark<=80)
    {
         cout << "grade c";   
    }
    else if(mark>=61&&mark<=70)
    {
         cout << "grade d";   
    }
    else if(mark<=60&&mark>=0)
    {  cout << "grade f";}
    else 
    {
         cout << "invalid";   
    }
    
    return 0;
}