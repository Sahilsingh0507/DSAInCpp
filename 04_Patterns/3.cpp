// print the below pattern for n = 3
//  1 2 3
//  4 5 6
//  7 8 9

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int number = 1;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << " " << number;
            number++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}