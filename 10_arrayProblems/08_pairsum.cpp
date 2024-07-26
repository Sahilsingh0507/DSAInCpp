#include <bits/stdc++.h>
using namespace std;

// function to find pair sum of the array
void pairSum(int arr[], int size, int sum)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                cout << min(arr[i], arr[j]) << " ";
                cout << max(arr[i], arr[j]) << " ";
                cout << endl;
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

    cout << "The Pairs which form pair sum are " << endl;
    pairSum(arr, size, sum);
    return 0;
}