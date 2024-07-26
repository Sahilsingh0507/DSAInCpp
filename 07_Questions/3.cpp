// Power of two
// brute force approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    bool flag = false;
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2, i);
        if (ans == n)
        {
            flag = true;
        }
    }
    cout << flag << endl;
    return 0;
}