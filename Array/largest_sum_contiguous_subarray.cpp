#include <bits/stdc++.h>
using namespace std;

int maxSumSubArray(int arr[], int n)
{
    int max_so_far = INT_MIN, max_ending_here = 0;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;

        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}

int maxSumSubArray1(int arr[], int n)
{
    int curr_max = arr[0];
    int max_so_far = arr[0];

    for (int i = 0; i < n; i++)
    {
        curr_max = max(curr_max, curr_max + arr[i]);
        max_so_far = max(max_so_far, curr_max);
    }

    return max_so_far;
}

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << maxSumSubArray(arr, n);
    return 0;
}