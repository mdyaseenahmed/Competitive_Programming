// CPP Program to print the Right angle triangle pattern using a single loop.

/*
    Input:      7 
    Output :    * 
                * * 
                * * * 
                * * * * 
                * * * * * 
                * * * * * * 
                * * * * * * *
    
*/


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
    int line_count = 1;
    int start_count = 0;
    for(;line_count <= n;)
    {
        if(start_count < line_count)
        {
            cout << "* ";
            start_count++;
            continue;
        }
        else{
            cout << endl;
            line_count += 1;
            start_count = 0;
        }
    }
    return 0;
}