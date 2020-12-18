//Coin change problem
#include <bits/stdc++.h>
using namespace std;
int count(int arr[], int m, int n)
{
	int dp[n + 1][m];
	int include, exclude;
	// there is only one way in which change of Rs. 0 can
	// be made ie., not including any coin
	for (int i = 0; i < m; i++)
	{
		dp[0][i] = 1;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < m; j++) //j is coin values
		{
			//if the the value of current coin is less than or equal to total amount whose change is required
			//include this coin
			if (i >= arr[j])
			{
				include = dp[i - arr[j]][j];
			}

			else
				include = 0;

			//excluding will store the number of ways in which
			//the amount can be changed without including the current coin value
			if (j >= 1)
			{
				exclude = dp[i][j - 1];
			}

			else
				exclude = 0;

			//dp[i][j] will be the sum of no.of ways by including as well as excluding the current coin
			dp[i][j] = include + exclude;
		}
	}
	return dp[n][m - 1];
}
int main(int argc, char** argv)
{
	int arr[] = {1, 2, 3};
	int m = sizeof(arr) / sizeof(arr[0]);
	int n;
	cin >> n;
	cout << count(arr, m, n);
	return 0;
}