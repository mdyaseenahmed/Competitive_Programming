// CPP Program To Implement Linear Search.

#include<bits/stdc++.h>

using namespace std;

// Linear Search: Searches for a key in an unsorted Array in a linear fashion.
// Time Complexity of Linear Search is O(n).

// int Iterative_linearSearch(int Arr[],int n,int key)
// {
//     for(int i = 0; i < n; i++)
//     {
//         if(Arr[i] == key)
//             return i;
//     }
//     return -1;
// }

int Recursive_linearSearch(int Arr[], int n, int l, int k)
{
    if(Arr[l] == k)
    {
        return l;
    }
    if(Arr[l] != k && l == n)
    {
        return -1;
    }
    else
        return Recursive_linearSearch(Arr,n,l+1,k);
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n,key;
    cin >> n;
    int Arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    cin >> key;

    // int res = Iterative_linearSearch(Arr,n,key);
    // if(res != -1)
    // {
    //     cout << "Element Found At Index: " << res << endl;
    // }
    // else
    // {
    //     cout << "Element Not Found";
    // }

    int res = Recursive_linearSearch(Arr,n,0,key);
    if(res != -1)
    {
        cout << "Element Found At Index: " << res << endl;
    }
    else
    {
        cout << "Element Not Found";
    }

    return 0;
}