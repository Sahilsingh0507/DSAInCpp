#include <bits/stdc++.h>
using namespace std;

// function to find duplicate in an array
int findDuplicateInArray(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
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

    int ans = findDuplicateInArray(arr, size);
    cout << "The duplicate element present in array is " << ans << endl;
    return 0;
}