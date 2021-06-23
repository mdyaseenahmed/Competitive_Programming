#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a,b;
    cin >> a >> b;

    for(int num=a;num<b;num++)
    {
        int i;
        for(i=2;i<num;i++)
        {
            if(num % i == 0)
            {
                break;
            }
        }
        if(i == num)
        {
            cout << num << " "; 
        }
    }

    return 0;
}