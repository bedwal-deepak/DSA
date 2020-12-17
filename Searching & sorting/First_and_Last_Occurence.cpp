//Find first and last positions of an element in a sorted array
// TC -> O(n)
#include <bits/stdc++.h>
using namespace std;
void findPosition(int arr[], int len, int k)
{
	int first = -1;
	int last = -1;
	for (int i = 0; i < len; i++)
	{
		if (arr[i] != k)
			continue;
		if (first == -1)
			first = i;
		else
		{
			last = i;
		}
	}
	cout << "first occurence is " << first << endl;
	cout << "last occurence is " << last << endl;
}
int main(int argc, char**)
{
	int arr[] = {0, 1, 2, 3, 3, 3, 3, 3, 4, 5, 6, 7};
	int len = sizeof(arr) / sizeof(arr[0]);
	int k;
	cin >> k;
	findPosition(arr, len, k);
	return 0;
}