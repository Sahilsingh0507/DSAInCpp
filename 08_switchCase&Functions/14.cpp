// function to check whether a number is prime or not
#include <bits/stdc++.h>
using namespace std;

// 1 -> prime no
// 0 -> not prime no

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        // divide ho gya 2 se n-1 kisi number se
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << n << " is a prime number " << endl;
    }
    else
    {
        cout << n << " is not a prime number " << endl;
    }
    return 0;
}