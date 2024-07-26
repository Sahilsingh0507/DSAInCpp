// Print the below pattern for n= 5
//  _ _ _ _ 1
//  _ _ _ 1 2 1
//  _ _ 1 2 3 2 1
//  _ 1 2 3 4 3 2 1
//  1 2 3 4 5 4 3 2 1
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
        // first triangle
        int space = n - row;
        while (space)
        {
            cout << " "
                 << "_";
            space--;
        }

        // print the middle pattern
        // second triangle
        int col = 1;
        while (col <= row)
        {
            cout << " " << col;
            col++;
        }

        // third triangle
        int start = row - 1;
        while (start)
        {
            cout << " " << start;
            start--;
        }

        cout << endl;
        row++;
    }

    return 0;
}