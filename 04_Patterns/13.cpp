// print the below pattern for n = 5
//  A
//  B B
//  C C C
//  D D D D
//  E E E E E
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
        char ch = 'A' + row - 1;
        while (col <= row)
        {
            cout << " " << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}