// kth largest element in an array
// TC:- nlogk
#include <bits/stdc++.h>
using namespace std;
int kthLargest(vector<int> nums, int k)
{
	// min heap
	priority_queue<int, vector<int>, greater<int>> min;
	for (int i = 0; i < nums.size(); i++)
	{
		min.push(nums[i]);
		if (min.size() > k)
		{
			min.pop();
		}
	}
	return min.top();
}

// TC: nlogk
int kthLargest2(vector<int> nums, int k)
{
	sort(nums.begin(), nums.end());
	return nums[nums.size() - k];
}

// set uses binary search tree so TC will be O(logk), SC: O(n)
int kthLargest3(vector<int> nums, int k)
{
	set<int> s(nums.begin(), nums.end());
	set<int>::iterator itr = s.begin();
	advance(itr, nums.size() - k);
	return *itr;
}

int main(int argc, char **argv)
{
	vector<int> nums = {6, 5, 3, 2, 8, 10, 9};
	int k = 3;
	cout << kthLargest(nums, k) << endl;
	cout << kthLargest2(nums, k) << endl;
	cout << kthLargest3(nums, k) << endl;
	return 0;
}