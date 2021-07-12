#include<bits/stdc++.h>

using namespace std;

int tilingWays(int n)
{
    if(n == 0 || n == 1)
        return n;
    return tilingWays(n-1) + tilingWays(n-2);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
    #endif

    cout << tilingWays(4);          // 3 (1. Placing all the tiles vertically. 2. Placing all the tiles horizontally. 3. Placing two tiles horizontally & two vertically.). 

    return 0;
}