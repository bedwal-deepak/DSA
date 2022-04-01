// O(n2) Search for min element and swap
#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int min_idx;
    // O(n)
    for (int i = 0; i < n - 1; i++)
    {
        min_idx = i;
        // O(n)
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        swap(arr[min_idx], arr[i]);
    }
}

int main(int argc, char **argv)
{
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}