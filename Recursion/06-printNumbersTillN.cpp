#include<bits/stdc++.h>

using namespace std;

void printInIncreasingOrder(int n)
{
    if(n == 0)
        return ;
    printInIncreasingOrder(n-1);
    cout << n << " ";        
}

void printInDecreasingOrder(int n)
{
    if(n == 0)
        return ;
    cout << n << " ";
    return printInDecreasingOrder(n-1);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t,n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        printInIncreasingOrder(n);
        cout << endl;
        printInDecreasingOrder(n);
        cout << endl;   
    }

    /*
        Upon executting the above code with the following,
        Input:  3
                3
                5
                8

        We got the following,
        Output: 1 2 3 
                3 2 1 
                1 2 3 4 5 
                5 4 3 2 1 
                1 2 3 4 5 6 7 8 
                8 7 6 5 4 3 2 1 

    */

    return 0;
}