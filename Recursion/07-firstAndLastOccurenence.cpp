#include<bits/stdc++.h>

using namespace std;

int findFirstOccurence(int Arr[],int n, int i, int k)
{
    if(i == n)
        return -1;
    if(Arr[i] == k)
        return i;
    return findFirstOccurence(Arr,n,i+1,k);
}

int findLastOccurence(int Arr[], int n, int i, int k)
{
    if(i == n)
        return -1;
    int restArray = findLastOccurence(Arr, n, i+1, k);
    if(restArray != -1)
        return restArray;            
    if(Arr[i] == k)
        return i;
    return -1;   
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t,n,k;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int Arr[n];
        for(int i = 0; i < n; i++)
            cin >> Arr[i];
        cin >> k;
        int first = findFirstOccurence(Arr,n,0,k);
        cout << first;
        int last = findLastOccurence(Arr,n,0,k);
        cout << endl << last;
    }

    /*
        Upon executting the above code with the following,
        Input:  1
                5
                4 7 4 56 7
                7

        We got the following,
        output: 1
                4
    */

    return 0;
}