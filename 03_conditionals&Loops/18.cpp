// Pattern question for improving the understanding of loops
// given n = 5 print this pattern
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // solution starts from here
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << " *";
            col++;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}