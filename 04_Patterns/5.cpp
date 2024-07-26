// print the below pattern for n=5
//  1
//  2 2
//  3 3 3
//  4 4 4 4
//  5 5 5 5 5

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
        int col = 1;
        while (col <= row)
        {
            cout << " " << row;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}