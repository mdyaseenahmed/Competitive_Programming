#include<bits/stdc++.h>

using namespace std;

int countPath(int s, int e)
{
    if(s == e)
        return 1;
    if(s > e)
        return 0;
    int count = 0;

    for(int i = 1; i <= 6; i++)
    {
        count+=countPath(s+i,e);
    }
    return count;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    cout << countPath(0, 3);            // 4


    return 0;
}