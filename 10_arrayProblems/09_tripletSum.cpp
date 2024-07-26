#include <bits/stdc++.h>
using namespace std;

// function to find pair sum of the array
void tripletSum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == sum)
                {
                    cout << arr[i] << " " << arr[j] << " " << arr[k];
                    // cout << min(arr[i], arr[j], arr[k]) << " ";
                    // cout << max(arr[i], arr[j], arr[k]) << " ";
                    // cout << endl;
                }
            }
        }
    }
}

int main()
{
    int sum;
    cin >> sum;

    int size;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "The Pairs which form triplet sum are " << endl;
    tripletSum(arr, size, sum);
    return 0;
}