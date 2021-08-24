#include<bits/stdc++.h>

using namespace std;

void func(int *p)
{
    *p = *p+1;
    p = NULL;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int x = 10, y = 20;
    int *ptr = &x;
    int& ref = y;
    *ptr++;
    ref++;
    cout << x << " " << y;      // 10 21

    return 0;
}