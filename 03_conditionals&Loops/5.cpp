#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cout << "Enter the value of a: ";
    cin >> a;
    if (a > 0)
    {
        cout << "Positive" << endl;
    }
    else
    {
        if (a < 0)
        {
            cout << "Negative" << endl;
        }
        else
        {
            cout << "Zero" << endl;
        }
    }

    return 0;
}