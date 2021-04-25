//Move all zeros present in an array to the end
//TC:- O(n)
#include<bits/stdc++.h>
using namespace std;
void zerosToLast(int arr[], int len) {
  int idx;

  for (int i = 0; i < len; i++) {
    if (arr[i] != 0) {
      arr[idx++] = arr[i];
    }
  }

  //for remaining indeces
  for (int i = idx; i < len; i++) {
    arr[i] == 0;
  }
}
int main()
{
  int arr[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
  int len = sizeof(arr) / sizeof(arr[0]);
  zerosToLast(arr, len);
  return 0;
}
