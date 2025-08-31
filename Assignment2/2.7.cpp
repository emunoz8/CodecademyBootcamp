#include <bits/stdc++.h>
using namespace std;

// O(n)
int optimalLongestSubarray(vector<int>& arr, int k) {
  unordered_map<int, int> map;
  int sum = 0, maxLength = 0, n = arr.size();

  for (int i = 0; i < n; i++) {
    sum += arr[i];

    if (sum == k) maxLength = i + 1;

    if (map.find(sum - k) != map.end())
      maxLength = max(maxLength, i - map[sum - k]);

    if (map.find(sum) == map.end()) map[sum] = i;

    /* for visual
      cout << "what was put inside the map" << endl;

      cout << sum << " " << i << endl;

      */
  }
  return maxLength;
}

// O(n^2)
int longestSubarray(vector<int>& arr, int k) {
  int n = arr.size(), sum;
  int maxLength = 0;

  for (int i = 0; i < n && maxLength < n - i; i++) {
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

  cout << optimalLongestSubarray(arr, k);

  return 0;
}