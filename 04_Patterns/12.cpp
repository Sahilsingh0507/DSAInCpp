// print the below pattern for n= 3
//  A B C
//  B C D
//  C D E
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
        char ch = 'A' + row - 1;
        int col = 1;
        while (col <= n)
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