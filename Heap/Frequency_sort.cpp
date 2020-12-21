// Frequency sort using min heap
#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
void frequencySort(vector<int> nums)
{
	unordered_map<int, int> mp;
	for (auto val : nums)
	{
		mp[val]++;
	}
	//max heap
	priority_queue < pi, vector<pi>, greater<pi>>min;
	for (auto val : mp)
	{
		min.push({val.second, val.first});
	}
	while (!min.empty())
	{
		int value = min.top().second;
		int frequency = min.top().first;
		cout << value << "->" << frequency << endl;
		min.pop();
	}
}
int main(int argc, char** argv)
{
	vector<int> nums = {2, 2, 3, 4, 4, 4, 1, 1, 1, 5, 6, 4};
	frequencySort(nums);
	return 0;
}