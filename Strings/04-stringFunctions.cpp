#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string s1 = "fam";
    string s2 = "ily";
    // String concatenation using '+' operator.
    string s3 = s1 + s2;    
    cout << s3 << endl;         // family
    cout << s1 + s2 << endl;    // family    

    // Accessing each charater
    for(int i = 0; i < s3.size(); i++)
        cout << s3[i] << endl;      // f
                                    // a
                                    // m
                                    // i
                                    // l
                                    // y

    cout << "Length of s3 is " << s3.length() << endl;      //Length of s3 is 6
    s3.clear();                         // clears the contents of the string s3.
    cout << s3.length() << endl;        // 0
    return 0;           
}