#include <bits/stdc++.h>
using namespace std;

// function to find intersection in the two array
int findArrayIntersection(int arr1[], int size1, int arr2[], int size2)
{
    for (int i = 0; i < size1; i++)
    {
        // int element = arr1[i];
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                // cout << arr1[i] << " ";
                return arr1[i];
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
    return -1;
}
int main()
{
    int arr1[4] = {1, 2, 3, 3};
    int arr2[2] = {3, 4};
    // int arr2[2] = {4, 5};

    // findArrayIntersection(arr1, 4, arr2, 2);
    cout << "The common elements present in both the array are " << findArrayIntersection(arr1, 4, arr2, 2) << endl;
}