/*
    Problem Statement: Given an array[] of size N. The task is to find the first repeating element in the array of integers, i.e., an element that occurs more than once and whose index of first occurence is smallest.

*/

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
    
    const long int N = 1e5;

    int minIdx[N];

    for(int i = 0; i < N; i++)
    {
        minIdx[i] = -1;
    }

    int res = INT_MAX;

    for(int i = 0; i < n; i++)
    {
        if(minIdx[Arr[i]] != -1)
        {
            res = min(res, minIdx[Arr[i]]);
        }
        else
        {
            minIdx[Arr[i]] = i;
        }       
    }

    if(res == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << res << endl;
    }

    /*
        Upon executing the above code with the following input: 
        Input: 7
               1 5 3 4 3 5 6
        
        We get the following,
        Output: 1 (As the element 5 is repeating and the smallest index is 1(0 based indexing) on which the element 5 appears for the first time).
     
    */ 

    return 0;
}