#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    string s;

    cin >> s;

    int freq[26];
    memset(freq, 0, sizeof(freq));

    for(int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    char ans = ' ';
    int maxFreq = INT_MIN;
    for(int i = 0; i < 26; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            ans = i+'a';
        }
    }

    cout << "Max Frequenecy: " << maxFreq << " and the Character is: " << ans;
    return 0;
}