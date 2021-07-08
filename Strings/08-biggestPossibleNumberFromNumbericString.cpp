#include<bits/stdc++.h>

using namespace std;

int main()
{   
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string s1;

    cin >> s1;              // 76899

    sort(s1.begin(), s1.end(), greater<int>());

    cout << s1;             // 99876

    return 0;
}