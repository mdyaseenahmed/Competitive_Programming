#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n1,n2;
    char op;

    cin >> n1 >> n2;
    cin >> op;

    switch(op)
    {
        case '+': cout << n1 << " + " << n2 << " = " << n1 + n2 << endl;
                    break; 
        case '-': cout << n1 << " - " << n2 << " = " << n1 - n2 << endl;
                    break; 
        case '*': cout << n1 << " * " << n2 << " = " << n1 * n2 << endl;
                    break; 
        case '%': cout << n1 << " % " << n2 << " = " << n1 % n2 << endl;
                    break; 
        default: cout << "Invalid Operator.!";    
                    break;                
    }

    return 0;
}
