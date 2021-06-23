// CPP Program To Implement Insertion Sort.

#include<bits/stdc++.h>

using namespace std;

// Insertion Sort: It virtually splits the Array into a Sorted and an unsorted part. The elements from the unsorted part are picked & placed at the correct position in the sorted part.
// Time Complexity: O(n^2)
// It is an In Place sorting technique.
// It is a stable sorting technique. 

void insertionSort(int Arr[], int n)
{
    int curr;
    for(int i = 1; i < n; i++)
    {
        curr = Arr[i];
        int j = i-1;
        while(Arr[j] > curr && j >= 0)
        {
            Arr[j+1] = Arr[j];
            j--;
        }
        Arr[j+1] = curr;
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

    insertionSort(Arr, n);
    printArray(Arr, n);

    return 0;
}