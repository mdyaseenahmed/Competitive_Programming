#include<bits/stdc++.h>

using namespace std;

int friendPairing(int n)
{
    if(n == 0 || n == 1 || n == 2)
        return n;
    return friendPairing(n-1) + (friendPairing(n-2) * (n-1));
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    cout << friendPairing(4);       // 10

    return 0;
}