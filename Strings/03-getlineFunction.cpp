#include<bits/stdc++.h>

using namespace std;

/*
    1. The C++ getline() is a standard library function that is used to read a string from an input stream.
    2. It is a part of the <string> header. 
    3. The getline() function extracts characters from the input stream and appends it to the string object until the delimiting character is encountered.
    4. Syntax:
                istream& getline(istream& is, string& str, char delim);
        Where,
            a) is: It is an object of istream class and tells the function about the stream from where to read the input from.
            b) str: It is a string object, the input is stored in this object after being read from the stream.
            c) delim: It is the delimitation character which tells the function to stop reading further input after reaching this character. (The delimitation character which is by default newline(\n) character.)
*/

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    string str, T;

    getline(cin, str);          // In this line the getline() function reads the string from the input terminal until a new line encountered.
    // cout << str;

    stringstream X(str);
    while (getline(X, T, ' '))      // In this line the getline() function reads the string from the stringstream X, until a blank space is encountered, & stores it in T. 
    {
        cout << T << endl;
    }
    
    /*
        Sample Input: Hello World this is a test message.
        Sample Output: 
                        Hello
                        World
                        this
                        is
                        a
                        test
                        message.


    */

    return 0;
}