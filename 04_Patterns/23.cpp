// Print below pattern for n = 4
//  _ _ _ 1
//  _ _ 2 3
//  _ 4 5 6
//  7 8 9 10
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    int count = 1;
    while (row <= n)
    {
        // print space first
        int space = n - row;
        while (space)
        {
            cout << " "
                 << "_";
            space--;
        }

        // print the numbers
        int col = 1;
        while (col <= row)
        {
            cout << " " << count;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}