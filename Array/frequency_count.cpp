// TC: O(n), SC: O(n)

#include <bits/stdc++.h>
using namespace std;

void frequencyCount(int arr[], int n)
{
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto x : m)
    {
        cout << x.first << " " << x.second << endl;
    }
}

int main(int argc, char **argv)
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 1, 2, 3};

    int n = sizeof(arr) / sizeof(arr[0]);
    frequencyCount(arr, n);
    return 0;
}