// TC: O(n), SC: O(1)
#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n)
{
    int last = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        swap(arr[i], arr[i + 1]);
    }
    arr[0] = last;
}

void rotateArray1(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
    }
}

int main(int argc, char **argv)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    int n = sizeof(arr) / sizeof(arr[0]);

    rotateArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}