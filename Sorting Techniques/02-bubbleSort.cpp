// CPP Program To Implement Bubble Sort.

#include<bits/stdc++.h>

using namespace std;

// Bubble Sort: It repeatedly swaps two adjacent elements if they are in wrong order(unsorted). In each iteration the largest element is Bubbled up i.e., the largest element takes its proper position in the first iteration. Similarly in the second iteration the second largest element & so on.
// Time Complexity: O(n^2)
// It is an In Place sorting technique.
// It is a stable sorting technique. 

void bubbleSort(int Arr[], int n)
{
    int temp;
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(Arr[j+1] < Arr[j])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
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

    bubbleSort(Arr, n);
    printArray(Arr, n);

    return 0;
}