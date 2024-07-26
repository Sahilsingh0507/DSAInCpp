// print the below pattern for n = 5
//  1 2 3 4 5
//  _ 2 3 4 5
//  _ _ 3 4 5
//  _ _ _ 4 5
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
        int number = row;
        while (col >= row)
        {
            cout << " "
                 << number;
            number++;
            col--;
        }
        cout << endl;
        row++;
    }

    return 0;
}