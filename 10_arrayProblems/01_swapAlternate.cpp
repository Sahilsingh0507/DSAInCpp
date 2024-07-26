#include <bits/stdc++.h>
using namespace std;

// function to swap alternate
void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size;)
    {
        if ((i + 1) < size)
        {
            swap(arr[i], arr[i + 1]);
        }
        // since we have to swap alternate
        i = i + 2;
    }
}

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
    int size;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    swapAlternate(arr, size);
    cout << "The alternate swap array is " << endl;
    printArray(arr, size);
}