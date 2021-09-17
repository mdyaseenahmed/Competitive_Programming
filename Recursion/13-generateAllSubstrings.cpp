#include<bits/stdc++.h>

using namespace std;

void generateSubstring(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans <<endl;
        return ;
    }
    char ch = s[0];
    string ros = s.substr(1);       // ros: rest of the string.
    generateSubstring(ros,ans);
    generateSubstring(ros,ans+ch);
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

        generateSubstring(s,"");
    }

    /*
        Upon executing the above code with the following,
        Input:  3
                ABC
                abcd
                bn

        We got the following,
        Output: 
                C
                B
                BC
                A
                AC
                AB
                ABC

                d
                c
                cd
                b
                bd
                bc
                bcd
                a
                ad
                ac
                acd
                ab
                abd
                abc
                abcd

                n
                b
                bn

    */

    return 0;
}