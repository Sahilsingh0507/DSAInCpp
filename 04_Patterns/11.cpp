// print the below pattern for n = 5
//  A B C D E
//  F G H I J
//  K L M N O
//  P Q R S T
//  U V W X Y
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int row = 1;
    char ch = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << " " << ch;
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}