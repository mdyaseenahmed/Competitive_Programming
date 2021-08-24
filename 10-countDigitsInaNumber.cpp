#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin >> n;
    int count = 0;

    // cout << 1+floor(log10(n)) << endl;
    // printf("%c",n);
    
    if(n == 0)
    {
        count = 1;
    }
    
    while(n != 0)
    {
        count += 1;
        n /= 10;
    }

    cout << "count: " << count;

    return 0;
}
