#include <bits/stdc++.h>
using namespace std;

// function to find intersection in the two array
int findArrayIntersection(int arr1[], int size1, int arr2[], int size2)
{
    int i = 0, j = 0;
    // int ans = 0;
    while (i < size1 && j < size2)
    {

        // condition 1
        // if we find common element print it
        if (arr1[i] == arr2[j])
        {
            return arr1[i];
            i++;
            j++;
        }

        // condition 2
        // when the element of first array is smaller than second array simply move the index of arr1 by 1
        else if (arr1[i] < arr2[j])
        {
            i++;
        }

        else
        {
            j++;
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