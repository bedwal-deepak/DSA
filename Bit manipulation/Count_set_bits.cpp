//Count set bits of a given integer
#include <bits/stdc++.h>
using namespace std;
int countSetBits(int n)
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main(int argc, char** argv)
{
	int n = 9;
	cout << countSetBits(n);
	return 0;
}