// TC: O(n), SC: O(1)
#include <bits/stdc++.h>
using namespace std;

void moveNegToLeft(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        continue;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    int arr[] = {5, 7, 9, -2, 12, -15, 10, -34};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveNegToLeft(arr, n);
    return 0;
}