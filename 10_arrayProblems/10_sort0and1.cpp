#include <bits/stdc++.h>
using namespace std;

// function to sort 0 and 1 in array
void sort0and1(int arr[], int size)
{
    int i = 0, j = size - 1;
    while (i <= j)
    {
        // condition 1
        if (arr[i] == 0)
        {
            i++;
        }

        // condition 2
        else if (arr[j] == 1)
        {
            j--;
        }

        // condition 3
        else if (arr[i] == 1 && arr[j] == 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
}

// function to print array
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

    sort0and1(arr, size);
    cout << "The sorted 0 and 1 array is " << endl;
    printArray(arr, size);
    return 0;
}