#include <bits/stdc++.h>
using namespace std;

// function to update array
void update(int arr[], int size)
{
    cout << "Inside the function ";

    // updating the array
    arr[0] = 120;
    // printing the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Going back to main function ";
}

int main()
{
    int arr[3] = {1, 2, 3};

    update(arr, 3);

    // printing the array
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}