// print the below pattern
//  1
//  2 1
//  3 2 1
//  4 3 2 1
//  5 4 3 2 1
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
        int number = row;
        while (col <= row)
        {
            cout << " " << number;
            number--;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}