#include <bits/stdc++.h>
using namespace std;
// binary search algo
// first occurence
int findFirstOccurence(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

// last occurence
int findLastOccurence(int arr[], int size, int key)
{
    int start = 0, end = size - 1, mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] < key)
        {
            start = mid + 1;
        }

        else if (arr[mid] > key)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int odd[5] = {1, 2, 3, 3, 5};
    // int even[]

    cout << "first and last occurence of 3 is at index " << findFirstOccurence(odd, 5, 3) << " " << findLastOccurence(odd, 5, 3);
    return 0;
}