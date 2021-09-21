// Check If a Number is Even or Odd without Using Conditional Statement(If Statement). 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n ;

    // 1st Approach
    // vector<string> res;
    // res.push_back("even");
    // res.push_back("odd");
    // cout << res[n%2];

    // 2nd Approach
    // (n & 1 && cout << "Odd" || cout << "Even");

    // 3rd Approach
    (n%2) ? cout << "Odd" : cout << "Even";

    return 0;
}