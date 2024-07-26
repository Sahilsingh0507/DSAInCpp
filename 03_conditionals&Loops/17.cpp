#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // since we are starting the loop with 1 we continue it to equal sign
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << "*"
                 << " ";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }

    return 0;
}