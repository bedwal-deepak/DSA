// Reverse an array using recursion.
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end)
{
	if (start > end)
	{
		return;
	}
	swap(arr[start], arr[end - 1]); //o(1)
	start++;
	end--;
	reverse(arr, start, end);
}
int main(int argc, char**)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6};
	int len = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, 0, len);
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}