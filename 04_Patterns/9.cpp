// print the below pattern for n = 5
//  A A A A A
//  B B B B B
//  C C C C C
//  D D D D D
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
        while (col <= n)
        {
            cout << " " << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}