#include <bits/stdc++.h>
using namespace std;

// TC: O(mlogm+nlogn)
void findUnion(int a[], int b[], int m, int n)
{
    set<int> un;
    // O(m)
    for (int i = 0; i < m; i++)
    {
        // O(logm)
        un.insert(a[i]);
    }
    // O(n)
    for (int i = 0; i < n; i++)
    {
        // O(logn)
        un.insert(b[i]);
    }

    // O(logm+n)
    for (auto itr = un.begin(); itr != un.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

void findUnion1(int a[], int b[], int m, int n)
{
    map<int, int> mp;

    for (int i = 0; i < m; i++)
    {
        mp.insert({a[i], i});
    }
    for (int i = 0; i < n; i++)
    {
        mp.insert(make_pair(b[i], i));
    }

    for (auto itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << " ";
    }
    cout << endl;
}

int main(int argc, char **argv)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int b[] = {0, 1, 2, 3, 4, 5};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);

    findUnion(a, b, m, n);
    findUnion1(a, b, m, n);

    return 0;
}