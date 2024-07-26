// functions
// creating a function for pow(a,b)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "answer is " << ans << endl;

    // again we have to write the whole code for implementing new value
    int c, d;
    cin >> c >> d;

    ans = 1;
    for (int i = 1; i <= d; i++)
    {
        ans = ans * c;
    }
    cout << "answer is " << ans << endl;

    // same cheez karne k liye code baar baar likh rhe
    int e, f;
    cin >> e >> f;

    ans = 1;
    for (int i = 1; i <= f; i++)
    {
        ans = ans * e;
    }
    cout << "answer is " << ans << endl;
    return 0;
}