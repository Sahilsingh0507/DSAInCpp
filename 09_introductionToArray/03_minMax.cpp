#include <bits/stdc++.h>
using namespace std;

// for maximum value
int getMax(int arr[], int size)
{
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    // returning max element
    return maxi;
}

// for minimum value
int getMin(int arr[], int size)
{
    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        mini = min(mini, arr[i]);
    }
    // returning min element
    return mini;
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