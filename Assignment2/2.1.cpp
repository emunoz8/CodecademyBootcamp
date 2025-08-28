/*
from: https://www.geeksforgeeks.org/problems/second-largest3735/1


Given an array of positive integers arr[], return the second largest element
from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest
element is 34. Input: arr[] = [10, 5, 10] Output: 5 Explanation: The largest
element of the array is 10 and the second largest element is 5. Input: arr[] =
[10, 10, 10] Output: -1 Explanation: The largest element of the array is 10 and
the second largest element does not exist. Constraints: 2 ≤ arr.size() ≤ 105 1 ≤
arr[i] ≤ 105


*/

#include <bits/stdc++.h>
using namespace std;

int getSecondLargest(vector<int> &arr) {
  vector<int> twoLargest(2, INT_MIN);// index 0 = largest, index 1 = second largest;
  int n = arr.size();
  twoLargest[0] = arr[0];

  for (int i = 1; i < n; i++) {
    if (arr[i] > twoLargest[0]) {
      twoLargest[1] = twoLargest[0];
      twoLargest[0] = arr[i];
    } else if (arr[i] > twoLargest[1] && arr[i] != twoLargest[0]) {
      twoLargest[1] = arr[i];
    }
  }

  if (twoLargest[1] != INT_MIN && twoLargest[0] != twoLargest[1])
    return twoLargest[1];

  return -1;
}

int main() {
  int n, secondLargest;
  cin >> n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) cin >> arr[i];

  secondLargest = getSecondLargest(arr);

  cout << secondLargest << endl;

  return 0;
}