#include <bits/stdc++.h>
using namespace std;
int getPivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start - (end + start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        }

        int mid = start + (end - start) / 2;
    }
    return -1;
}

int findPosition(int arr[], int size, int key)
{
    int pivot = getPivot(arr, size);
    if (key >= arr[pivot] && key <= arr[size - 1])
    {
        // binary search on second line
        return binarySearch(arr, pivot, size - 1, key);
    }
    else
    {
        // binary search on first line
        return binarySearch(arr, 0, pivot - 1, key);
    }
}
int main()
{
    int arr[5] = {7, 8, 1, 3, 5};
    cout << "The element is present at index: " << findPosition(arr, 5, 3);
    return 0;
}