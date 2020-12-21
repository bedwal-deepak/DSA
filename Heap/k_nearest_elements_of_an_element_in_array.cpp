// find k nearest elements for given element in an array
//TC:- nlogk
#include<bits/stdc++.h>
using namespace std;
void kNearest(vector<int> nums, int k, int x)
{
	//max heap
	priority_queue < pair<int, int> >max;
	for (int i = 0; i < nums.size(); i++)
	{
		// 6, 5, 3, 2, 8, 10, 9 subtract x from each element
		// 2, 3, 5, 6, 0, 2, 1
		max.push({abs(nums[i] - x), nums[i]});
		if (max.size() > k)
		{
			max.pop();
		}
	}
	while (!max.empty())
	{
		cout << max.top().second << " ";
		max.pop();
	}
	cout << endl;
}
int main(int argc, char** argv)
{
	vector<int> nums = {6, 5, 3, 2, 8, 10, 9};
	int k = 3;
	int x = 8;
	kNearest(nums, k, x);
	return 0;
}