// print the below pattern for n=5
//  _ _ _ _ *
//  _ _ _ * *
//  _ _ * * *
//  _ * * * *
//  * * * * *
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // print the space first
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " "
                 << "_";
            space--;
        }

        int col = 1;
        while (col <= row)
        {
            cout << " "
                 << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}