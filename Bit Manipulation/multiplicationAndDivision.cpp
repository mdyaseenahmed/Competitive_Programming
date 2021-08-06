#include<bits/stdc++.h>

using namespace std;

// Left Shift: When we carry out the left shift operation by 1, the given number is multiplied by 2. For Example: If a number N = 3, then N << 1 = 6 (3 ==> 0011 and (0011 << 1) ==> 0110 whose decimal equivalent is 6). 
// Right Shift: Similarly when we right shift a number by 1, the given number is divided by 2. For Example: If a number N = 3, then N >> 1 = 1 (3 ==> 0011 and (0011 >> 1) ==> 0001 whose decimal equivalent is 1). 

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int a;

    cin >> a;
    
    cout << a << " * 2 = " << (a<<1) << endl;
    cout << a << " / 2 = " << (a>>1);

    /*
        Upon executing the above code the following:
        Input: 3

        We got the following,
        Output: 3 * 2 = 6
                3 / 2 = 1
                
    */
    return 0;
}