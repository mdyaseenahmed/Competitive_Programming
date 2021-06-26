// CPP Program to remove the duplicate elements from an unsorted array using extra space. 

#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    vector<int> res;

    int Arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }

    const int N = 1e5;
    int temp[N];
    memset(temp, -1, N);

    for(int i = 0; i < n; i++)
    {
        if(temp[Arr[i]] == -1)
        {
            res.push_back(Arr[i]);
            temp[Arr[i]] = i;
        }
        else
        {
            continue;
        }
    }

    // vector<int>::iterator it;

    // for(it = res.begin(); it != res.end(); it++)
    // {
    //     cout << *it << "\n";
    // }

    cout << res.size() <<endl;
    
    //  
    return 0;
}