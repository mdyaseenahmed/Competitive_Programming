// CPP Program To Implement Selection Sort.

#include<bits/stdc++.h>

using namespace std;

// Selection Sort: It finds the minimum element in the given array & swaps it with the element at the begining. Then finds the second smallest element & swaps it with the next element & so on. 
// Time Complexity: O(n^2)
// It is an In Place sorting technique, which mean it does not require extra space.
// The default implementation of Selection sort is not stable. (Stability means two elements with equal value appear in the same order in the sorted output as they appear in the input array to be sorted).

void selectionSort(int Arr[], int n)
{
    int temp;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(Arr[j] < Arr[i])
            {
                temp = Arr[i];
                Arr[i] = Arr[j];
                Arr[j] = temp;
            }
        }
    }
}

void printArray(int Arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout << Arr[i] << "\t";
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int Arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> Arr[i];
    }

    selectionSort(Arr, n);
    printArray(Arr, n);

    return 0;
}