// CPP Program To Implement Binary Search.

#include<bits/stdc++.h>

using namespace std;

// Binary Search: Searches a sorted array by repeatedly dividing the search interval in half.
// Time Complexity of Binary Search is O(log n).

// int Iterative_binarySearch(int Arr[], int n, int k)
// {
//     int l, r;
//     l = 0; r = n;
//     while(r >= l)
//     {
//         int m = (l+(r-l)/2);
//         if(Arr[m] == k)
//         {
//             return m;
//         }
//         else if(k < Arr[m])
//         {
//             r = m-1;
//         }
//         else
//         {
//             l = m+1;
//         }
//     }
//     return -1;
// }

int Recursive_binarySearch(int Arr[], int l, int r, int k)
{
    if(l <= r)
    {
        int m = (l+(r-l)/2);
        if(Arr[m] == k)
        {
            return m;
        }
        else if(k < Arr[m])
        {
            return Recursive_binarySearch(Arr,0,m-1,k);
        }
        else
        {
            return Recursive_binarySearch(Arr,m+1,r,k);
        }
    }
    return -1;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,k;
    cin >> n;
    int Arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    cin >> k;
    // int res = Iterative_binarySearch(Arr, n, k);
    // if(res != -1)
    // {
    //     cout << "Element Found At Index: " << res;
    // }
    // else
    // {
    //     cout << "Element Not Found.!";
    // }
    
    int res = Recursive_binarySearch(Arr, 0, n, k);
    if(res != -1)
    {
        cout << "Element Found At Index: " << res;
    }
    else
    {
        cout << "Element Not Found.!";
    }

    return 0;
}