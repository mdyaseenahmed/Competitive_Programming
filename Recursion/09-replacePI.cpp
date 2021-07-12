#include<bits/stdc++.h>

using namespace std;

void replacePI(string s)
{
    if(s.length() == 0)
        return ;
    if(s[0] == 'p' && s[1] == 'i')
    {
        cout << "3.14";
        replacePI(s.substr(2));
    }
    else
    {
        cout << s[0];
        replacePI(s.substr(1));
    }
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
        replacePI(s);
        cout << endl;
    }
    /*
        Upon executing the above code with the following,
        Input:  2
                pHeipillopi
                pipip

        We got the following,
        Output: pHei3.14llo3.14
                3.143.14p

    */
    return 0;
}