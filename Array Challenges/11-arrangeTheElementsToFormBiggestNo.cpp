// Arrange given numbers to form the biggest number.
// Given an array of numbers, arrange them in a way that yields the largest value. For example, if the given numbers are {54, 546, 548, 60}, the arrangement 6054854654 gives the largest value. And if the given numbers are {1, 34, 3, 98, 9, 76, 45, 4}, then the arrangement 998764543431 gives the largest value.

// Given two numbers X and Y, how should myCompare() decide which number to put first – we compare two numbers XY (Y appended at the end of X) and YX (X appended at the end of Y). If XY is larger, then X should come before Y in output, else Y should come before. 
// For example, let X and Y be 542 and 60. To compare X and Y, we compare 54260 and 60542. Since 60542 is greater than 54260, we put Y first.

#include<bits/stdc++.h>

using namespace std;

bool myCompare(string X, string Y)
{
    string XY = X.append(Y);                                
    string YX = Y.append(X);

    return XY > YX;
}

void printLargest(vector<int> arr)
{
    int n = arr.size();
    vector<string> tempStr(n);                              // creating a vector of strings of size n. where n is the number of elements passed in the array as input.
    string str;
    for(int i = 0; i < arr.size(); i++)
    {
        tempStr[i] = to_string(arr[i]);                     // to_string() converts an integer to the equilvalent string.
        cout << tempStr[i] << "\t";                         // 3 30	34 5 9	
    }
    cout << endl;
    sort(tempStr.begin(), tempStr.end(), myCompare);
    for(int i = 0; i < tempStr.size(); i++)
        cout << tempStr[i];                                 // 9534330
    for(int i = 0; i < tempStr.size(); i++)
        str += tempStr[i];
    cout << endl << str;                                    // 9534330
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
        int temp;
        vector<int> arr;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }
        printLargest(arr);
    }

    return 0;
}
