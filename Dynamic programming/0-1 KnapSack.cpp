//0-1 KnapSack problem
#include<bits/stdc++.h>
using namespace std;
int knapSack(int wt[], int val[], int W, int n)
{
	//Base conition:- think of the smallest valid input
	if (n == 0 || W == 0)  // either bag is empty or weight is zero
		return 0;

	//if current weight of item is less or equal to remaining capacity
	if (wt[n - 1] <= W)
	{
		//include that item or exclude
		return max(val[n - 1] + knapSack(wt, val, W - wt[n - 1], n - 1), knapSack(wt, val, W, n - 1));
	}

	//if current weight of item is greater than to remaining capacity
	else if (wt[n - 1] > W)
	{
		//exclude
		return knapSack(wt, val, W, n - 1);
	}
}
int main()
{
	int wt[] = {3, 4, 5, 6, 7};
	int val[] = {1, 2, 3, 4, 5};
	int W = 10;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(wt, val, W, n);
	return 0;
}