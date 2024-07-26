#include <bits/stdc++.h>
using namespace std;

// function to swap values
void swap(int arr[], int size)
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;
}

// function to print function
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[2] = {1, 2};
    swap(arr, 2);
    cout << "The swapped array is " << endl;
    printArray(arr, 2);
}