//0-1 knapSack using memoization
#include<bits/stdc++.h>
using namespace std;
int knapSack(int wt[], int val[], int W, int n)
{
  //Base conition:- think of the smallest valid input
  if (n == 0 || W == 0)  // either bag is empty or weight is zero
    return 0;

  //take a matrix of size n+1, W+1. Here n & W both are not constant
  int t[n + 1][W + 1];
  //initialize the matrix with -1 using memset function
  memset(t, -1, sizeof(t));

  //check if value is already present inside matrix t[n+1][w+1]
  //if present then don't call the recursive function
  if (t[n][W] != -1)
  {
    return t[n][W];
  }
  //if current weight of item is less or equal to remaining capacity
  if (wt[n - 1] <= W)
  {
    //include that item or exclude
    return t[n][W] = max(val[n - 1] + knapSack(wt, val, W - wt[n - 1], n - 1), knapSack(wt, val, W, n - 1));
  }

  //if current weight of item is greater than to remaining capacity
  else if (wt[n - 1] > W)
  {
    //exclude
    return t[n][W] = knapSack(wt, val, W, n - 1);
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