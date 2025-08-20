#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int steps;
  int k = -1;
  int len;
  cin >> n;
  len = (n * 2) - 1;

  for (int i = 0; i < len; i++) {
    k = i < n ? (k + 1) : (k - 1);
    steps = 0;

    for (int j = 0; j < len; j++) {
      cout << (n - steps) << " ";
      if (j < k)
        steps++;
      else if (j >= len - 1 - k)
        steps--;
    }

    cout << endl;
  }

  return 0;
}