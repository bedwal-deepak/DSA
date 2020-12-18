//Count total set bits in all numbers from 1 to n
#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
	int count = 0;
	for (int i = 1; i <= n; i++)
	{
		int j = i;
		while (j)
		{
			j = j & (j - 1);
			count++;
		}
	}
	return count;
}
int main(int argc, char** argv)
{
	int n = 8;
	cout << countSetBits(n);
	return 0;
}