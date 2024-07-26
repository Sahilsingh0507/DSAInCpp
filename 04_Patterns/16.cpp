// print below pattern for n = 5
//  E
//  D E
//  C D E
//  B C D E
//  A B C D E
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
        char ch = 'A' + n - row;
        while (col <= row)
        {
            cout << " " << ch;
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}