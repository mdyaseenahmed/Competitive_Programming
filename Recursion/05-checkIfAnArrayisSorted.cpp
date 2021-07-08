#include<bits/stdc++.h>

using namespace std;

bool isSorted(int Arr[], int n)
{
    if(n == 1)
        return true;
    return (Arr[0] <= Arr[1] && isSorted(Arr+1, n-1));
}

void printArray(int Arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t, n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        int Arr[n];
        for(int i = 0; i < n; i++)
            cin >> Arr[i];
        bool res = isSorted(Arr, n);
        if(res == true)
            cout << "Sorted" << endl;
        else
            cout << "Unsorted" << endl;
        // printArray(Arr,n);
    }

    /*
        Upon executing the above code with the following,
        Input:  3
                3
                1 2 3
                5
                7 89 9 5 6
                2
                7 8

        We got the following,
        Output: Sorted
                Unsorted
                Sorted
 
    */

    return 0;
}