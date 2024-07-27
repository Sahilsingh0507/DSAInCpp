#include <bits/stdc++.h>
using namespace std;

// binary search function
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    // int mid = (start + end) / 2;
    // for avoiding range error of int
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // go to right part of the array
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        // go to left part
        // key < mid case
        else
        {
            end = mid - 1;
        }
        // mid = (start + end) / 2;
        // for avoiding range error of int
        int mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarySearch(even, 6, 12);
    cout << "Index of key in array is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);
    cout << "Index of key in array is " << oddIndex << endl;

    return 0;
}