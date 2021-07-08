#include<bits/stdc++.h>

using namespace std;

void reverse(string s)
{ 
    if(s.size() == 0)
        return ;
    string ros = s.substr(1);
    reverse(ros);
    cout << s[0];
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >> t;

    while(t--)
    {   
        string s;
        cin >> s;
        reverse(s);
        cout << endl;
    }

    /*
        Upon executing the above code with the following,
        Input:  2
                Hello
                Binod

        We got the following,
        Output: olleH
                doniB

    */

    return 0;
}