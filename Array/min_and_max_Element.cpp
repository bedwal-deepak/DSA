// TC: O(n), SC: O(1)

#include <bits/stdc++.h>
using namespace std;

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        continue;
    }
    return min;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
        continue;
    }
    return max;
}

int main(int argc, char **argv)
{
    int arr[] = {4, 7, 3, 9, 23, 5, 10, 78};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Min element in given array is:- " << findMin(arr, n) << endl;

    cout << "Max element in given array is:- " << findMax(arr, n) << endl;

    return 0;
}