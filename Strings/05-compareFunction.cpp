#include<bits/stdc++.h>

using namespace std;

/* 
    compare() Function: Compares the value of the string object (or a substring) to the sequence of characters specified by its arguments.
    The string is compared to a comparing string, which is determined by the other arguments passed to the function.    
*/

// compare() function returns 0 if both the strings are equal.
// compare() function returns >0 either the value of the first character that does not match is greater in the compared string, or all compared characters match but the compared string is longer.
// compare() function returns <0 either the value of the first character that does not match is lower in the compared string, or all compared characters match but the compared string is shorter.

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string str = "green apple";
    string str2 = "red apple";
    
    if(str.compare(str2) == 0)
        cout << str << " & " << str2 << " are equal";
    else
        cout << str << " is not " << str2 << endl;

    cout << str.compare(str2) << endl;      // -1
    cout << str2.compare(str);              // 1
    
    return 0;
}