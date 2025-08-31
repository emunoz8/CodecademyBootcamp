/*
from: https://leetcode.com/problems/majority-element/description/
Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times. You
may assume that the majority element always exists in the array.



Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2


Constraints:

n == nums.length
1 <= n <= 5 * 104
-109 <= nums[i] <= 109


Follow-up: Could you solve the problem in linear time and in O(1) space?



*/

#include <bits/stdc++.h>
using namespace std;

int optimalBooyerMoore(vector<int> &nums) {
  int count = 0;
  int candidate = 0;

  for (int &num : nums) {
    if (count == 0) candidate = num;

    count += (num == candidate) ? 1 : -1;
  }

  return candidate;
}

// not optimal
int majorityElement(vector<int> &nums) {
  unordered_map<int, int> map;
  int n = nums.size();

  for (int num : nums) {
    if (map.find(num) == map.end())
      map[num] = 1;
    else
      map[num]++;
  }

  for (auto each : map) {
    if (each.second > n / 2) return each.first;
  }

  return 0;
}

int main() {
  int n;

  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) cin >> arr[i];

  cout << optimalBooyerMoore(arr);

  return 0;
}