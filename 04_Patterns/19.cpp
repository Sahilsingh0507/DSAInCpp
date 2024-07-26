// Print the below pattern for n = 5
//  * * * * *
//  _ * * * *
//  _ _ * * *
//  _ _ _ * *
//  _ _ _ _ *
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
                 << "*";
            col--;
        }
        cout << endl;
        row++;
    }

    return 0;
}