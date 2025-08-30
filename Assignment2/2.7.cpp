#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& arr, int k) {
  int n = arr.size(), sum;
  int maxLength = 0;

  for (int i = 0; i < n && maxLength < n; i++) {
    sum = 0;
    for (int j = i; j < n; j++) {
      sum += arr[j];

      if (sum == k && (j - i + 1) > maxLength) maxLength = j - i + 1;
    }
  }

  return maxLength;
}

int main() {
  int n, k;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cin >> k;

  cout << longestSubarray(arr, k);

  return 0;
}