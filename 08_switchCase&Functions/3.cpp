// switch case in c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = 'a';
    cout << endl;

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;

    case '1':
        cout << "Character one" << endl;
        break;

    default:
        cout << "It is the default case";
        break;
    }

    cout << endl;
    return 0;
}