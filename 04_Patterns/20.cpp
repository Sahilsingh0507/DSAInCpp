// Print the below pattern for n=5
//  1 1 1 1 1
//  _ 2 2 2 2
//  _ _ 3 3 3
//  _ _ _ 4 4
//  _ _ _ _ 5
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // print space first
        int space = row - 1;
        while (space)
        {
            cout << " "
                 << "_";
            space--;
        }

        // print the stars
        int col = n;
        while (col >= row)
        {
            cout << " "
                 << row;
            col--;
        }
        cout << endl;
        row++;
    }

    return 0;
}