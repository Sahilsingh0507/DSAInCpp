#include <bits/stdc++.h>
using namespace std;

// function
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing Done";
    cout << endl;
}

int main()
{
    // declaration
    int number[15];

    // accessing an array
    // cout << " Value at 0 index " << number[0] << endl;

    // first make an array of size 21 then u can access 20 index
    // cout << " Value at 20 index " << number[20] << endl;

    // initializing an array
    int second[3] = {5, 7, 11};
    // accessing an element
    // cout << "Value at 2 index " << second[2] << endl;
    // 11

    int third[15] = {2, 7};

    // printing the array
    // for (int i = 0; i < 15; i++)
    // {
    //     cout << third[i] << " ";
    // }
    // cout << endl;

    // printArray(third, 15);

    // intitializing all the locations with zero
    int fourth[10] = {0};

    // printing the array by function calling
    // printArray(fourth, 10);

    // initializing all the locations with 1
    int fifth[10] = {1};
    // this is not possible in this way
    // printing the array by function calling
    // printArray(fifth, 10);

    // size of an array
    int fifthSize = sizeof(fifth) / sizeof(int);

    // cout << fifthSize << endl;

    // character array

    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    // accessing the element
    cout << ch[3] << endl;

    // this below line cannot be executed because we created a function that pass only integer type arrays not char array
    // printArray(ch, 5);

    // printing the array
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;

    // double firstDouble[10];
    // float firstFloat[10];
    // bool firstBool[5];
    return 0;
}