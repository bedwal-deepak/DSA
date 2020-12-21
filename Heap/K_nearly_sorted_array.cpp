// Sort a k nearly sorted array
//TC:- nlogk
#include<bits/stdc++.h>
using namespace std;
void nearlySortedArray(vector<int> &nums, int k)
{
	//min heap
	priority_queue < int, vector<int> , greater<int> >min;
	int j = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		min.push(nums[i]);
		if (min.size() > k)
		{
			nums[j++] = min.top();
			min.pop();
		}
	}
	while (min.size() > 0)
	{
		nums[j++] = min.top();
		min.pop();
	}
}
int main(int argc, char** argv)
{
	vector<int> nums = {6, 5, 3, 2, 8, 10, 9};
	int k = 4;
	nearlySortedArray(nums, k);
	for (int i = 0; i < nums.size(); i++)
	{
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}