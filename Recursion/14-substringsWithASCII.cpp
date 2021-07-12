#include<bits/stdc++.h>

using namespace std;

void generateSubstringsWithASCII(string s, string ans)
{
    if(s.length() == 0)
    {
        cout << ans << endl;
        return ;
    }

    char ch = s[0];
    int code = ch; 
    string ros = s.substr(1);

    generateSubstringsWithASCII(ros,ans);
    generateSubstringsWithASCII(ros,ans+ch);
    generateSubstringsWithASCII(ros,ans+to_string(code));
}

int main()  
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int t;
    cin >>t;

    while(t--)
    {
        string s;
        cin >> s;

        generateSubstringsWithASCII(s,"");
    }

    /*
        Upon executing the above code with the following,
        Input:  1
                AB

        We got the following,
        Output: 
                B
                66
                A
                AB
                A66
                65
                65B
                6566
 
    */

    return 0;
}