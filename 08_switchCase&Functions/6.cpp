// continue statement are not used in switch case because switch case is not a loop and coninue statement are only used in loops
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch = '1';
    cout << endl;

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        continue;
        ;

    case '1':
        cout << "Character one" << endl;
        continue;

    default:
        cout << "It is the default case:";
        continue;
    }

    cout << endl;
    return 0;
}