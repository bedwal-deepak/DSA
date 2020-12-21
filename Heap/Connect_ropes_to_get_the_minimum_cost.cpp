// Connect ropes to minimize the cost
#include<bits/stdc++.h>
using namespace std;
int minCost(vector<int> nums)
{
	int cost = 0;
	//min heap
	priority_queue <int, vector<int> , greater<int>>pq;
	for (int i = 0; i < nums.size(); i++)
	{
		pq.push(nums[i]);
	}
	//Here we will add the minimum values so that can get minimum cost
	// 1+2=3, 3+3=6, 4+5=9, 9+6=15
	while (pq.size() >= 2 )
	{
		int a = pq.top();
		pq.pop();
		int b = pq.top();
		pq.pop();
		cost += (a + b);
		pq.push(a + b);
	}
	return cost;
}
int main(int argc, char** argv)
{
	vector<int> nums = {1, 2, 3, 4, 5};
	cout << minCost(nums) << endl;
	return 0;
}