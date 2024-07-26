// print the below pattern for n=5
//  _ _ _ _ 1
//  _ _ _ 2 2
//  _ _ 3 3 3
//  _ 4 4 4 4
//  5 5 5 5 5
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
                 << row;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}