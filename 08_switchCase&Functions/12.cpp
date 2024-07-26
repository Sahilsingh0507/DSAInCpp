// creating a function for ncr
#include <bits/stdc++.h>
using namespace std;

// function for factorial
int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}

// function for ncr
int ncr(int n, int r)
{
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n - r);

    int ans = numerator / denominator;

    return ans;
}

int main()
{
    int n, r;
    cin >> n >> r;

    cout << "Answer is " << ncr(n, r) << endl;
    return 0;
}