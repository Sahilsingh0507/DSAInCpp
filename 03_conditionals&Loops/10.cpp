#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the character ch: ";
    ch = cin.get();

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is an uppercase alphabet";
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is a lowercase alphabet";
    }

    else if (ch >= '0' && ch <= '9')
    {
        cout << "This is numeric";
    }

    return 0;
}