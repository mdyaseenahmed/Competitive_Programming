#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    // int row,column;

    // cin >> row >> column;

    // (1). Solid Rectangle
    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < column; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << "" << endl;
    // }
    /* 
        Input:   4 8
        Output:  * * * * * * * * 
                 * * * * * * * * 
                 * * * * * * * * 
                 * * * * * * * * 
    */

    // (2). Hollow Rectangle
    // for (int i = 1; i <= row; i++)
    // {
    //     for (int j = 1; j <= column; j++)
    //     {
    //         if(i == 1 || i == row || j == 1 || j == column)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << "" << endl;   
    // }  
    /* 
        Input:   4 9
        Output:  * * * * * * * * * 
                 *               * 
                 *               * 
                 * * * * * * * * * 
    */

    // (3). Inverted Half Pattern
    // int n;
    // cin >> n;
    // for(int i = n; i >= 1; i--)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    /*
        Input: 7
        Output: * * * * * * * 
                * * * * * * 
                * * * * * 
                * * * * 
                * * * 
                * * 
                * 
    */

    // (4). Half Pyramid after 180 degree rotation
    // int n;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         if(j <= n-i)
    //         {
    //             cout << "  ";
    //         }
    //         else
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output:         * 
                      * * 
                    * * * 
                  * * * * 
                * * * * * 
    */

    // (5). Half Pyramid Using Numbers.
    // int n;
    // cin >> n;

    // for (int  i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output: 1 
                2 2 
                3 3 3 
                4 4 4 4 
                5 5 5 5 5
    */

    // (6). Floyd's Triangle
    // int n;
    // int count = 1;
    // cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << count << "\t";
    //         count += 1;
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output: 1	
                2	3	
                4	5	6	
                7	8	9	10	
                11	12	13	14	15	
    */

    // (7). Butterfly Pattern
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for(int j = 1; j <= space; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    // for(int i = n; i >= 1; i--)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     int space = 2 * n - 2 * i;
    //     for(int j = 1; j <= space; j++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    /*
        Input: 4
        Output: *             * 
                * *         * * 
                * * *     * * * 
                * * * * * * * * 
                * * * * * * * * 
                * * *     * * * 
                * *         * * 
                *             * 
    */

    // (8) Inverted Pattern.
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= n-i+1; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output: 1 2 3 4 5 
                1 2 3 4 
                1 2 3 
                1 2 
                1 
    */

    // (9) 0-1 Pattern [First Approach]
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         if((i % 2 == 0 && j % 2 != 0) || (j % 2 == 0 && i % 2 != 0))
    //         {
    //             cout << "0 ";
    //         }
    //         else
    //         {
    //             cout << "1 "; 
    //         }
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output: 1 
                0 1 
                1 0 1 
                0 1 0 1 
                1 0 1 0 1 
    */
    // (9) 0-1 Pattern [Second Approach]
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         if((i+j) % 2== 0)
    //         {
    //             cout << "1 ";
    //         }
    //         else
    //         {
    //             cout << "0 ";
    //         }
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output: 1 
                0 1 
                1 0 1 
                0 1 0 1 
                1 0 1 0 1 
    */

    // (10) Rhombus Pattern
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int k = 1; k <= n-i; k++)
    //     {
    //         cout << "  ";
    //     }
    //     for(int k = 1; k <= n; k++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output:         * * * * * 
                      * * * * * 
                    * * * * * 
                  * * * * * 
                * * * * * 
    */

    // (11) Number Pattern.
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= n-i; j++)
    //     {
    //         cout << " ";
    //     }
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output:  1 
                1 2 
               1 2 3 
              1 2 3 4 
             1 2 3 4 5 
    */

    // (12). Palindromic Pattern.
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     int j;
    //     for(j = 1; j <= n-i; j++)
    //     {
    //         cout << "  ";
    //     }
    //     int k=i;
    //     for(; j <= n; j++)
    //     {
    //         cout << k-- << " ";
    //     }
    //     k=2;
    //     for(;j<=n+i-1;j++)
    //     {
    //         cout << k++ << " ";
    //     }
    //     cout << endl;
    // }
    /* 
        Input: 5
        Output:      1 
                   2 1 2 
                 3 2 1 2 3 
               4 3 2 1 2 3 4 
             5 4 3 2 1 2 3 4 5 
    */
    
    // (13). Star Pattern.
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= n-i; j++)
    //     {
    //         cout << "  "; 
    //     }
    //     for(int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }   
    //     cout << endl;
    // }
    // for(int i = n; i >= 1; i--)
    // {
    //     for(int j = 1; j <= n-i; j++)
    //     {
    //         cout << "  "; 
    //     }
    //     for(int j = 1; j <= 2 * i - 1; j++)
    //     {
    //         cout << "* ";
    //     }   
    //     cout << endl;
    // }
    /*
        Input: 4
        Output:       * 
                    * * * 
                  * * * * * 
                * * * * * * * 
                * * * * * * * 
                  * * * * * 
                    * * * 
                      *
    */

    // (14) Zig-Zag Pattern.
    // int n;
    // cin >> n;
    // for(int i = 1; i <= 3; i++)
    // {
    //     for(int j = 1; j <= n; j++)
    //     {
    //         if(((i+j)%4 == 0) || (i == 2 && j % 4 == 0))
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    /*
        Input: 9
        Output:     *       *     
                  *   *   *   *   
                *       *       * 
    */
    
    // (15) Inverted Half Pyramid Using Numbers.
    // int n;
    // cin >> n;
    // for(int i = n; i >= 1; i--)
    // {
    //     for(int j = 1; j<= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    /*
        Input: 5
        Output: 1 2 3 4 5 
                1 2 3 4 
                1 2 3 
                1 2 
                1 
    */

    // (16) Half Pyramid Using Number - 02
    // int n;
    // cin >> n;
    // for(int i = 1; i <= n; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;   
    // }
    /*
        Input: 5
        Output: 1 
                1 2 
                1 2 3 
                1 2 3 4 
                1 2 3 4 5 
    */

    // (17) Inverted Half Pattern Using Numbers - 02
    // int n;
    // cin >> n;
    // int count = 1;
    // for(int i = n; i >= 1; i--)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         cout << count << " ";
    //     }
    //     count++;
    //     cout << endl;
    // }
    /*
        Input: 5
        Output:  1 1 1 1 1 
                 2 2 2 2 
                 3 3 3 
                 4 4 
                 5 
    */
    return 0;
} 