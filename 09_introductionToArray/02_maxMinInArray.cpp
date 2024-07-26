#include <bits/stdc++.h>
using namespace std;

// for maximum value
int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            /* code */
            max = arr[i];
        }
    }
    // returning max element
    return max;
}

// for minimum value
int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            /* code */
            min = arr[i];
        }
    }
    // returning min element
    return min;
}

int main()
{
    int size;
    cin >> size;

    int num[100];
    // taking input in an array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;
}