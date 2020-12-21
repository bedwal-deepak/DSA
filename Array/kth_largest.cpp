// kth largest element in an array
//TC:- nlogk
#include<bits/stdc++.h>
using namespace std;
int kthLargest(vector<int> nums, int k)
{
	//min heap
	priority_queue < int, vector<int> , greater<int> >min;
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
int main(int argc, char** argv)
{
	vector<int> nums = {6, 5, 3, 2, 8, 10, 9};
	int k = 3;
	cout << kthLargest(nums, k) << endl;
	return 0;
}