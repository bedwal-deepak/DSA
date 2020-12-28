// Find an element in rotated sorted array
//TC:- O(logn)
//SC"- O(1)
#include <bits/stdc++.h>
using namespace std;
int search(int arr[], int low, int high, int k)
{
	if (high < low)
		return -1;

	int mid = low + (high - low) / 2;

	if (k == arr[mid])
		return mid;

	if (k > arr[mid])
		return search(arr, (mid + 1), high, k);

	return search(arr, low, (mid - 1), k);
}
int findPivot(int arr[], int low, int high)
{
	if (low > high)
		return -1;
	if (high == low)
		return low;
	int mid = low + (high - low) / 2;

	if (mid < high && arr[mid] > arr[mid + 1])
		return mid;

	if (mid > low && arr[mid] < arr[mid - 1])
		return mid - 1;

	if (arr[low] >= arr[mid])
		return findPivot(arr, low, mid - 1);

	return findPivot(arr, mid + 1, high);
}
int findIndex(int arr[], int len, int k)
{
	//the element whose next element is smaller is pivot
	int pivot = findPivot(arr, 0, len - 1);

	if (pivot == -1) //array is not rotated
		return search(arr, 0, len - 1, k);

	if (arr[pivot] == k)
		return pivot;

	if (arr[0] <= k)
		return search(arr, 0, pivot - 1, k);

	return search(arr, pivot + 1, len - 1, k);
}
int main(int argc, char** argv)
{
	int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3};
	int len = sizeof(arr) / sizeof(arr[0]);
	int k = 5;
	cout << "Index of " << k << " is:- ";
	cout << findIndex(arr, len, k) << endl;
	return 0;
}