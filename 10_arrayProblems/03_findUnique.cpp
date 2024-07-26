#include <bits/stdc++.h>
using namespace std;

// function to find unique
int findUnique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}
int main()
{
    int m;
    cin >> m;
    int size = ((2 * m) + 1);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // findUnique(arr,size);
    cout << "The unique element in the array is " << findUnique(arr, size) << endl;
    return 0;
}