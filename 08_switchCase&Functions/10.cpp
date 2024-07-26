// we can still reduce th enumber of lines in the code
// creating function of power(a,b)
#include <bits/stdc++.h>
using namespace std;

// function of power
int power()
{
    int a, b;
    cin >> a >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

int main()
{
    int answer = power();
    cout << "Answer is " << answer << endl;
}