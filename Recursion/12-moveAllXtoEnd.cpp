#include<bits/stdc++.h>

using namespace std;

string moveAllXtoEnd(string s)
{
    if(s.length() == 0)
        return "";
    char ch = s[0];
    string ans = moveAllXtoEnd(s.substr(1));
    if(ch == 'x')
        return ans+ch;
    return ch+ans;
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif  

    int t;
    cin >> t;

    while (t--)
    {
        string s, res;
        cin >> s;
        res = moveAllXtoEnd(s);
        cout << res << endl;
    }
    
    /*
        Upon executing the above code with the following,
        Input:  1 
                axxbdxcefxhix

        We got the following,
        Output: abdcefhixxxxx

    */

    return 0;
}