#include<bits/stdc++.h>

using namespace std;

void checkIfTheNumberIsAMultipleOf2(int n)
{
    if(n == 0)
        cout << "0";
    else if((n & (n-1)) == 0)
        cout << "Yes Multiple of 2";
    else
        cout << "Not a Multiple of 2";
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int num;
    cin >> num;
    checkIfTheNumberIsAMultipleOf2(num);

    return 0;
}