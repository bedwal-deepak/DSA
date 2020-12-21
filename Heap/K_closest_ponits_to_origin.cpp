// K closest points to origin
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, pair<int, int>> pip;
void nearestToOrigin(vector<vector<int>> nums, int k)
{
	//max heap
	priority_queue < pip> pq;
	for (int i = 0; i < nums.size(); i++)
	{
		// (x^2+y^2, {x,y})
		pq.push(make_pair((nums[i][0]*nums[i][0]) + (nums[i][1]*nums[i][1]), make_pair(nums[i][0], nums[i][1])));
		if (pq.size() > k)
		{
			pq.pop();
		}
	}
	while (!pq.empty())
	{
		pair<int, int>p = pq.top().second;
		cout << p.first << "," << p.second << endl;
		pq.pop();
	}
}
int main(int argc, char** argv)
{
	vector<vector<int> >nums = {
		{1, 2},
		{ -2, 2},
		{5, 8},
		{0, 1},
		{2, 3},
		{ -5, 6}
	};
	int k = 3;
	nearestToOrigin(nums, k);
	return 0;
}