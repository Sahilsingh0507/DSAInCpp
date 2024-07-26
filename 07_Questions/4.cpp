// better approach for power of two
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int ans = 1;
    bool flag = false;
    for (int i = 0; i <= 30; i++)
    {
        if (ans == n)
        {
            flag = true;
        }

        if (ans < INT_MAX / 2)
        {
            ans = (ans * 2);
        }
    }

    cout << flag << endl;
    return 0;
}