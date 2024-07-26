#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i = i + 1;
    }

    cout << "The sum of first " << n << " natural numbers is: " << sum << endl;

    return 0;
}