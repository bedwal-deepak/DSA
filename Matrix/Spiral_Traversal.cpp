//Spiral traversal on a Matrix
#include <bits/stdc++.h>
using namespace std;
#define m 5
#define n 5
void printSpiral(int matrix[m][n], int top, int bottom, int left, int right)
{
	if (left > right)
		return;
	for (int i = left; i <= right; ++i)
	{
		cout << matrix[top][i] << " ";
	}
	top++;
	if (top > bottom)
		return;
	for (int i = top; i <= bottom; ++i)
	{
		cout << matrix[i][right] << " ";
	}
	right--;
	if (left > right)
		return;
	for (int i = right; i >= left; --i)
	{
		cout << matrix[bottom][i] << " ";
	}
	bottom--;
	if (top > bottom)
		return;
	for (int i = bottom; i >= top; --i)
	{
		cout << matrix[i][left] << " ";
	}
	left++;
	printSpiral(matrix, top, bottom, left, right);
}
int main(int argc, char**)
{
	int matrix[m][n] = {
		{ 1,  2,  3,  4, 5},
		{16, 17, 18, 19, 6},
		{15, 24, 25, 20, 7},
		{14, 23, 22, 21, 8},
		{13, 12, 11, 10, 9}
	};
	int top = 0;
	int bottom = n - 1;
	int right = m - 1;
	int left = 0;
	printSpiral(matrix, top, bottom, left, right);
	return 0;
}