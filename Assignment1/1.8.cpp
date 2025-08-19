#include <bits/stdc++.h>
using namespace std;

// any n with two digits does not work
int main() {
  int n;
  int space = 0;
  cin >> n;

  for (int i = 1; i <= n; i++) {
    space = (n - i) * 2;

    for (int j = 1; j <= i; j++) {
      cout << j;
    }

    for (int j = 0; j < space; j++) cout << " ";

    //((n * 2) - space) /2, (working) --simplified--> n - (n - i)

    for (int j = n - (n - i); j > 0; j--) {
      cout << j;
    }

    cout << endl;
  }

  return 0;
}