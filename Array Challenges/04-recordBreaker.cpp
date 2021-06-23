/*
    Problem Statement: Isyana is given the number of visitors at her local theme park on N consecutive days. The number of visitors on the i-th day is VI. A day is record-breaking if it satisfies both of the following conditions:

    1. The number of visitors on the day is strictly larger than the number of visitors on each of the previous days.
    2. Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day.
    
    Note that the very first day could be a record-breaking day. Please help Isyana find out the number of record-breaking days.

    Input: The first line of the input gives the number of test cases, T. T test cases follow. Each test case begins with a line containing the integer N. The second line contains N integers. The i-th integer is Vi.
    Output: For each test case, output one line containing Case #x: y, where x is the test case number (starting from 1) and y is the number of record-breaking days.
*/

#include<bits/stdc++.h>

using namespace std;

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
        int Arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> Arr[i];
        }   
        int c_max = -1;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            // if(Arr[i] > Arr[i+1] && i == 0)
            // {
            //     count++;
            // }
            // if(i == n-1 && Arr[i] > c_max)
            // {
            //     count++;
            // }
            // if(Arr[i] > c_max && Arr[i] > Arr[i+1])
            // {
            //     count++;
            //     c_max = Arr[i];
            // }

            if(Arr[i] > c_max && Arr[i] > Arr[i+1])
            {
                count++;
            }
            c_max = max(c_max, Arr[i]);
        }
        cout << count << endl;  
    }   

    /*
        Upon executing the above code with the following input: 
        Input:  4
                8
                1 2 0 7 2 0 2 0
                6
                4 8 15 16 23 42
                9
                3 1 4 1 5 9 2 6 5
                6
                9 9 9 9 9 9

        We get the following,
        Output: 2
                1
                3
                0
     
    */ 

    return 0;
}