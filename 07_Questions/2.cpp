// compliment of base 10 integer
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int m = n;
    int mask = 0;

    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }

    int ans = (~n) & mask;
    // edge case

    if (n == 0)
    {
        ans = 1;
    }

    cout << ans << endl;
    return 0;
}