// print the below pattern for n = 5
//  1 2 3 4 5 5 4 3 2 1
//  1 2 3 4 * * 4 3 2 1
//  1 2 3 * * * * 3 2 1
//  1 2 * * * * * * 2 1
//  1 * * * * * * * * 1
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
        // print first triangle
        int col = n;
        int number = 1;
        while (col >= row)
        {
            cout << " " << number;
            number++;
            col--;
        }

        // print star
        // print second triangle

        int star1 = row - 1;
        while (star1)
        {
            cout << " "
                 << "*";
            star1--;
        }

        // print third triangle
        // print star

        int star2 = row - 1;
        while (star2)
        {
            cout << " "
                 << "*";
            star2--;
        }

        // print fouth triangle

        int pattern = n - row + 1;
        while (pattern)
        {
            cout << " " << pattern;
            pattern--;
        }

        cout << endl;
        row++;
    }

    return 0;
}