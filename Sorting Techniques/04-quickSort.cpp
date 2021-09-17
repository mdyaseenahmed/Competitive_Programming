// CPP Program to Implement Quick Sort.

#include<bits/stdc++.h>

using namespace std;

// Quick Sort: It is a Divide and Conquer algorithm. It picks an element as Pivot and partitions the given array around the picked pivot.
// Time Complexity: O(nlogn) (Best Case). In worst case the time complexity is O(n^2)
// It is a In Place sorting technique.
// The default implementation of Quick Sort is not stable.

// A utility Function to swap two values.
void swap(int Arr[], int i, int j)
{
    int temp = Arr[i];
    Arr[i] = Arr[j];
    Arr[j] = temp;
}

// Partition function:  which returns the index at which the partition has to be made.
int partition(int Arr[], int low, int high)
{
    int pivot = Arr[low];
    int i = low, j = high;

    while(i < j)
    {
        while(Arr[i] <= pivot)
            i++;

        while (Arr[j] > pivot)
            j--;

        if(i < j)
            swap(Arr, i, j);
    }
    swap(Arr, low, j);
    return j;
}

void quickSort(int Arr[], int low, int high)
{
    if(low < high)
    {
        int p = partition(Arr, low, high);
        quickSort(Arr, low, p-1);
        quickSort(Arr, p+1, high);
    }
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
        
        quickSort(Arr, 0, n-1);
        
        printArray(Arr, n);
    }

    /*

        Upon Executing the Above code with the following,

        Input:  2
                5
                7 4 2 8 1
                9
                2 1 6 10 4 1 3 9 5

        We got the following,

        Output:  1 2 4 7 8 
                 1 1 2 3 4 5 6 9 10 

    */

    return 0;
}