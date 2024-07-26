// print the below pattern for n=5
//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int count = 1;
    int row = 1;
    while (row <= n)
    {
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