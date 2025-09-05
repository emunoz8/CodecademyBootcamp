/*
from: https://leetcode.com/problems/spiral-matrix/description/

Given an m x n matrix, return all elements of the matrix in spiral order.



Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]


Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100


*/

#include <bits/stdc++.h>
using namespace std;
/* failed attempt to do it recursively
enum class Direction { RIGHT, DOWN, LEFT, UP };

Direction turn(Direction d) {
  switch (d) {
    case Direction::UP:
      return Direction::RIGHT;
    case Direction::RIGHT:
      return Direction::DOWN;
    case Direction::DOWN:
      return Direction::LEFT;
    case Direction::LEFT:
      return Direction::DOWN;
  }
  return d;
}

bool isInbounce(int i, int j, int n, int m) {
  return i < n && j < m && i >= 0 && j >= 0;
}

void recursiveSpiral(vector<vector<int>>& matrix, vector<vector<bool>>& visited,
                     vector<int>& spiral, Direction& direction, int n, int m,
                     int i, int j) {
  if ((int)(spiral.size()) == m * n) return;

  if (isInbounce(i, j, n, m)) {
    visited[i][j] = true;
    spiral.push_back(matrix[i][j]);
    switch (direction) {
      case Direction::RIGHT:
        recursiveSpiral(matrix, visited, spiral, direction, n, m, i, j + 1);
        break;
      case Direction::DOWN:
        recursiveSpiral(matrix, visited, spiral, direction, n, m, i + 1, j);
        break;
      case Direction::LEFT:
        recursiveSpiral(matrix, visited, spiral, direction, n, m, i, j - 1);
        break;
      case Direction::UP:
        recursiveSpiral(matrix, visited, spiral, direction, n, m, i - 1, j);
        break;
    }
  } else
    turn(direction);

  return;
}
*/
vector<int> spiralOrder(vector<vector<int>>& matrix) {
  int n = matrix.size();
  int m = matrix[0].size();
  vector<int> res;
  res.reserve(n * m);

  /*In this approach the rectangle shrinks*/
  int top = 0, bottom = n - 1;
  int left = 0, right = m - 1;

  while (left <= right && top <= bottom) {
    for (int j = left; j <= right; ++j) res.push_back(matrix[top][j]);
    if (++top > bottom) break;

    for (int i = top; i <= bottom; ++i) res.push_back(matrix[i][right]);
    if (--right < left) break;

    for (int j = right; j >= left; --j) res.push_back(matrix[bottom][j]);
    if (--bottom < top) break;

    for (int i = bottom; i >= top; --i) res.push_back(matrix[i][left]);
    if (++left > right) break;
  }

  return res;
}

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<int>> arr(n, vector<int>(m));
  vector<int> ans;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }

  ans = spiralOrder(arr);
  int len = ans.size();

  for (int i = 0; i < len; i++) {
    cout << ans[i] << " ";
  }

  return 0;
}