#include<bits/stdc++.h>

using namespace std;

string removeDuplicateCharacters(string s)
{
    if(s.length() == 0)
        return "";
    char ch = s[0];
    string ans = removeDuplicateCharacters(s.substr(1));
    if(ch == ans[0])
        return ans;
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

    while(t--)
    {
        string s,res;
        cin >> s;
        res = removeDuplicateCharacters(s);
        cout << res << endl;
    }

    /*
        Upon executing the above code with the following,
        Input:  3
                Hello
                eeeerrrp
                asdf

        We got the following,
        Output: Helo
                erp
                asdf

    */

    return 0;
}