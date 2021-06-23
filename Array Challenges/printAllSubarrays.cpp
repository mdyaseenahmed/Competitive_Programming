#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int Arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
           for(int k = i; k <= j; k++)
           {
               cout << Arr[k] << "\t";
           }
           cout << endl;
        }
    }
    return 0;
}