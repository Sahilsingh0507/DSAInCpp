// print the following pattern for n = 3
//  *
//  * *
//  * * *
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
            cout << " *";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}