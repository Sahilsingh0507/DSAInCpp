#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int i = 2;
    while (i <= n - 1)
    {
        if (n % i == 0)
        {
            cout << "Not Prime for " << i << endl;
        }
        else
        {
            cout << "Prime for " << i << endl;
        }
        i = i + 1;
    }

    return 0;
}