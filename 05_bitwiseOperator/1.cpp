// Bitwise operator
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 4;
    int b = 6;

    // bracket lagana compulsary hai nhi toh error show karega
    // AND operator (&)
    cout << " a&b " << (a & b) << endl;
    // OR operator (|)
    cout << " a|b " << (a | b) << endl;
    // Not operator (~)
    cout << " ~a " << ~a << endl;
    // XOR Operator (^)
    cout << " a^b " << (a ^ b) << endl;

    // left shift operator (<<)
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;

    // Right shift operator  (>>)
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;

    // Increment operator

    int i = 7;

    // Pre increment operator  (++i)
    cout << (++i) << endl;
    // Post increment operator  (i++)
    cout << (i++) << endl;
    // Post increment operator (i--)
    cout << (i--) << endl;
    // pre decrement operator (--i)
    cout << (--i) << endl;
    return 0;
}