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

/*
#include <bits/stdc++.h>
using namespace std;
int first(int arr[], int low, int high, int k)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;
		if (mid == 0 || k > arr[mid - 1] && arr[mid] == k)
			return mid;
		else if (k < arr[mid])
			return first(arr, 0, mid - 1, k);
		return first(arr, mid + 1, high, k);
	}
	return -1;
}

int last(int arr[], int low, int high, int k, int len)
{
	if (low <= high)
	{
		int mid = (low + high) / 2;
		if (mid == len - 1 || k < arr[mid + 1] && arr[mid] == k)
			return mid;
		else if (k < arr[mid])
			return last(arr, 0, mid - 1, k, len);
		return last(arr, mid + 1, high, k, len);
	}
	return -1;
}
int main(int argc, char**)
{
	int arr[] = {0, 1, 2, 3, 3, 3, 3, 3, 4, 5, 6, 7};
	int len = sizeof(arr) / sizeof(arr[0]);
	int k;
	cin >> k;
	cout << "first occurance is:- " << first(arr, 0, len - 1, k) << endl;
	cout << "last occurance is:-" << last(arr, 0, len - 1, k, len) << endl;
	return 0;
}*/