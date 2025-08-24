#include <bits/stdc++.h>
using namespace std;

// 1
void sumOfEvenIndecies(vector<int> &arr) {
  int sum = 0;
  for (size_t i = 0; i < arr.size(); i++)
    if (i % 2 == 0) sum += arr[i];

  cout << sum;
}
// 2
void findTheLargestElement(vector<int> &arr) {
  int maxElement = arr[0];

  for (int x : arr)
    if (maxElement < x) maxElement = x;

  cout << maxElement;
}
// 3
void matrixRowSum(vector<vector<int>> &arr) {
  int sum;

  for (auto x : arr) {
    sum = 0;
    for (auto num : x) sum += num;

    cout << sum << endl;
  }
}
// 4
void countPositiveInts(vector<int> &arr) {
  int total = 0;

  for (int x : arr) {
    if (x > 0) total++;
  }

  cout << total;
}

// 5
void printEvenOrOdd(int n) { cout << ((n % 2 == 0) ? "Even" : "Odd"); }

// 6
void diagonalSumOfMatrix(vector<vector<int>> &arr) {
  int sum = 0;

  for (size_t i = 0; i < arr.size(); i++) sum += arr[i][i];

  cout << sum;
}

// 7
void reverse1DArray(vector<int> arr) {
  int i = 0, j = arr.size() - 1;

  while (i < j) {
    swap(arr[i++], arr[j--]);
  }

  for (auto x : arr) cout << x << " ";
}

// 8
void countOccurances(vector<int> &arr, int t) {
  int total = 0;

  for (int x : arr)
    if (x == t) total++;

  cout << total;
}

// 9
void checkPalindromeArray(vector<int> &arr) {
  int i = 0, j = arr.size() - 1;
  bool isPalindrome = true;

  while (i < j) {
    if (arr[i++] != arr[j--]) isPalindrome = false;
  }

  cout << (isPalindrome ? "Yes" : "No");
}
// 10
void findAndReplaceMatrix(vector<vector<int>> arr, int t, int r) {
  for (size_t i = 0; i < arr.size(); i++) {
    for (size_t j = 0; j < arr[0].size(); j++) {
      if (arr[i][j] == t)
        cout << r << " ";
      else
        cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}

// 11
void averageOfRow(vector<vector<int>> &arr) {
  double avg;

  for (auto row : arr) {
    avg = 0.0;
    for (int x : row) {
      avg += x;
    }

    cout << ((avg / arr[0].size())) << endl;
  }
}
// 12
void countVowels(string &word) {
  int total = 0;

  for (char curr : word) {
    if (curr == 'a' || curr == 'e' || curr == 'i' || curr == 'o' || curr == 'u')
      total++;
  }

  cout << total << endl;
}
// 13
void isPalindrome(string word) {
  int i = 0, j = word.size() - 1;
  bool isPalin = true;

  while (i < j) {
    if (word[i++] != word[j--]) isPalin = false;
  }

  cout << (isPalin ? "Yes" : "No");
}

int main() {
  // 1
  /*************/
  //   int n;
  //   vector<int> arr;
  //   cin >> n;

  //   for (int i = 0; i < n; i++) {
  //     int x;
  //     cin >> x;
  //     arr.push_back(x);
  //   }

  //   sumOfEvenIndecies(arr);

  /*************/

  // 2
  /*************/

  // int n;
  // vector<int> arr;
  // cin >> n;

  // for (int i = 0; i < n; i++) {
  //   int x;
  //   cin >> x;
  //   arr.push_back(x);
  // }

  // findTheLargestElement(arr);

  /*************/

  // 3
  /*************/
  //   int n, m;
  //   cin >> n >> m;

  //   vector<vector<int>> arr(n, vector<int>(m));

  //   for (int i = 0; i < n; i++) {
  //     for (int j = 0; j < m; j++) {
  //       cin >> arr[i][j];
  //     }
  //   }

  //   matrixRowSum(arr);
  /*************/

  // 4
  /*************/

  //   int n;
  //   cin >> n;
  //   vector<int> arr;

  //   for (int i = 0; i < n; i++) {
  //     int x;
  //     cin >> x;

  //     arr.push_back(x);
  //   }

  //   countPositiveInts(arr);

  /*************/

  // 5
  /*************/
  //   int n;
  //   cin >> n;

  //   printEvenOrOdd(n);

  /*************/

  // 6
  /*************/
  //   int n;
  //   cin >> n;

  //   vector<vector<int>> arr(n, vector<int>(n));

  //   for (int i = 0; i < n; i++)
  //     for (int j = 0; j < n; j++) cin >> arr[i][j];

  //   diagonalSumOfMatrix(arr);

  /*************/

  // 7
  /*************/
  //   int n;
  //   cin >> n;
  //   vector<int> arr(n);

  //   for (int i = 0; i < n; i++) cin >> arr[i];

  //   reverse1DArray(arr);

  /*************/

  // 8
  /*************/
  //   int n, t;
  //   cin >> n;

  //   vector<int> arr(n);

  //   for (int i = 0; i < n; i++) cin >> arr[i];

  //   cin >> t;

  //   countOccurances(arr, t);

  /*************/

  // 9
  /*************/
  //   int n;
  //   cin >> n;

  //   vector<int> arr(n);

  //   for (int i = 0; i < n; i++) cin >> arr[i];

  //   checkPalindromeArray(arr);

  /*************/

  // 10
  /*************/
  //   int n, m, t, r;

  //   cin >> n >> m;

  //   vector<vector<int>> arr(n, vector<int>(m));

  //   for (int i = 0; i < n; i++)
  //     for (int j = 0; j < m; j++) cin >> arr[i][j];

  //   cin >> t >> r;

  //   findAndReplaceMatrix(arr, t, r);

  /*************/

  // 11
  /*************/

  //   int n, m, eat;
  //   cin >> n >> m >> eat;
  //

  //   vector<vector<int>> arr(n + 1, vector<int>(m));

  //   arr[0][0] = n;
  //   arr[0][1] = m;
  //   arr[0][2] = eat;

  //   for (int i = 1; i <= n; i++) {
  //     for (int j = 0; j < m; j++) {
  //       cin >> arr[i][j];
  //     }
  //   }

  //   averageOfRow(arr);

  /*************/

  // 12
  /*************/
  //   string line;
  //   getline(cin, line);

  //   countVowels(line);
  /*************/

  // 13
  /*************/

  //   string line;

  //   getline(cin, line);

  //   isPalindrome(line);
  /*************/

  return 0;
}