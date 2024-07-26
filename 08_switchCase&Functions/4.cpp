// switch case in c++
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = '1';
    int num = 1;
    cout << endl;

    switch (num)
    {
    case 1:
        cout << "First" << endl;
        cout << "First again" << endl;
        // break;

    case '1':
        cout << "Character one" << endl;
        break;

    default:
        cout << "It is the default case:";
        break;
    }

    cout << endl;
    return 0;
}