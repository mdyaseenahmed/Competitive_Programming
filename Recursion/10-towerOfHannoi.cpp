#include<bits/stdc++.h>

using namespace std;

void towerOfHannoi(int n, char src, char dest, char helper)
{
    if(n == 0)
        return ;
    towerOfHannoi(n-1, src, helper, dest);
    cout << "Move from " << src << " to " << dest << endl;
    towerOfHannoi(n-1, helper, dest, src);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    towerOfHannoi(3, 'A', 'C', 'B');

    /*
        Output: Move from A to C
                Move from A to B
                Move from C to B
                Move from A to C
                Move from B to A
                Move from B to C
                Move from A to C
    */

    return 0;
}