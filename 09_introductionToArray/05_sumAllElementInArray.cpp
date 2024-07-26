#include <bits/stdc++.h>
using namespace std;

// function to print sum of all elements in array
int sumOfAllElementsInArray(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = arr[i] + sum;
    }
    return sum;
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

    cout << "Sum of all elements in an array is " << sumOfAllElementsInArray(arr, size) << endl;
    return 0;
}