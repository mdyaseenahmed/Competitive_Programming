#include<bits/stdc++.h>

using namespace std;

int countPathsInMaze(int n, int i, int j)
{
    if(i == n-1 && j == n-1)
    {
        return 1;
    }
    if(i >= n || j >= n)
    {
        return 0;
    }
    return countPathsInMaze(n,i+1,j) + countPathsInMaze(n,i,j+1);
}


int main()
{
    #ifndef ONLINE_JUDGE
        freopen("output.txt","w",stdout);
    #endif

    cout << countPathsInMaze(3, 0, 0);      // 6

    return 0;
}