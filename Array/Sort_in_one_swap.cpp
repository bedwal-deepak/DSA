//Sort an array in one swap whose two elements are swapped
//TC:- O(n)
#include<bits/stdc++.h>
using namespace std;
void sortInOneSwap(int arr[], int len) {
  //for mispalced positions
  int x = -1, y = -1;

  int prev = arr[0];
  for (int i = 1; i < len; i++) {
    if (prev > arr[i]) {
      if (x == -1) { //if first mispalced element found
        x = i - 1;
        y = i;
      } else { // for second mispalced element found
        y = i;
      }
    }
    prev = arr[i];
  }
  swap(arr[x], arr[y]);
}
int main()
{
  int arr[] = {3, 8, 6, 7, 5, 9};
  int len = sizeof(arr) / sizeof(arr[0]);
  sortInOneSwap(arr, len);
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
