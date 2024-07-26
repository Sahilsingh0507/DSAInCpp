#include <bits/stdc++.h>
using namespace std;
int main()
{
    double f;
    cout << "Enter the temperature in farenheit: ";
    cin >> f;
    double c = (5.0 / 9) * (f - 32);
    cout << "the temp in celsius is :" << c << endl;
    return 0;
}