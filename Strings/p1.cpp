#include <bits/stdc++.h>
using namespace std;

string nk(string arr, int n)
{
    unordered_map<char, int> freq;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (auto i : freq)
    {
        if (i.second > n / 2)
        {
            flag = 1;
        }
    }
    if (flag)
    {
        return "NO";
    }
    else
    {
        return "YES";
    }
}

int main()
{
    string s1,s2;
    cin >> s1;
    int n = s1.length();
    s2 = nk(s1, n);
    cout << s2;
    return 0;
}