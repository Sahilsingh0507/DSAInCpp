// create a function to check whether a number is even or odd
#include <bits/stdc++.h>
using namespace std;

// 1 -> Even
// 0 -> odd
bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int num;
    cin >> num;

    if (isEven(num))
    {
        cout << "Number is even " << endl;
    }
    else
    {
        cout << "Number is odd " << endl;
    }
}