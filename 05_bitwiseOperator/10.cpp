// another way of writing for loop
// For Loop understanding
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;

    cout << "Printing count from 1 to n" << endl;
    int i = 1;
    for (;;)
    {
        if (i <= n)
        {
            cout << i << endl;
        }
        else
        {
            break;
        }
        i++;
    }

    return 0;
}