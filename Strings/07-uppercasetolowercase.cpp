#include<bits/stdc++.h>

using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif 

    string s1;
    getline(cin, s1);                   // HeLlO WoRlD.!
    cout << "S1: " << s1 << endl;       // S1: HeLlO WoRlD.! 

    // Converts the string to Upper case
    for(int i = 0; i < s1.length(); i++)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
    }
    cout << s1 << endl;                 // HELLO WORLD.!

    // Converts the string to Lower case
    for(int i = 0; i < s1.size(); i++)
    {
        if(s1[i] >= 'A' && s1 [i] <= 'Z')
            s1[i] += 32;
    }
    cout << s1 <<endl;                  // hello world.!

    // Converts the string to Upper case
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    cout << s1 << endl;                 // HELLO WORLD.!

    // Converts the string to Lower case
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    cout << s1 << endl;                 // hello world.!

    cout << 'a'+2 << endl;                  // 99 (It takes the ASCII value of 'a' i.e., 97 and adds 2 to it so it is 99)
    cout << char(97) << endl;               // a (converts 97 to character i.e., 'a')
    cout << 97 - 32 << endl;                // 65
    cout << int('a'-'A') <<endl;            // 32 (The difference between the ASCII values of the lowercase & uppercase letters is 32. So, if we have to convert a character from lower case to uppercase we just have to subtract 32 from the given character. Similarly to convert it from Uppercase to lowercase we have to add 32.)
    return 0;
}