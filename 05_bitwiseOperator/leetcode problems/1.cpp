#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int product = 1;
    int sum = 0;
    while (n != 0)
    {
        int lastDigit = n % 10;
        product = lastDigit * product;
        sum = sum + lastDigit;

        n = n / 10;
    }

    int difference = product - sum;
    cout << difference << endl;
    return 0;
}