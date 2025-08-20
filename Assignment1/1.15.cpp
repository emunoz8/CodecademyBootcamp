#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, num, pad, mid, offset = 2;

  cin >> n;
  mid = n / 2;
  pad = mid;

  for (int i = 0; i < n; i++) {
    pad = (i > mid) ? pad + 1 : pad - 1;
    num = mid + offset;
    for (int j = 0; j <= pad; j++) {
      num--;
      cout << " ";
    }

    for (int j = pad; j < n; j++) {
      num = (j < mid) ? num - 1 : num + 1;

      cout << (j < n - pad - offset ? to_string(num) : " ");
    }

    cout << endl;
  }

  return 0;
}
