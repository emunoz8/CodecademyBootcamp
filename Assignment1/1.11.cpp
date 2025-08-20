#include <bits/stdc++.h>
using namespace std;

// any n with two digits does not work
int main() {
  int n;
  int space = 0;
  int stars = 0;
  cin >> n;

  for (int i = 1; i <= n * 2 - 1; i++) {
    if (i <= n) {
      space = (n - i) * 2;
      stars++;
    } else {
      space += 2;
      stars--;
    }

    for (int j = 0; j < stars; j++) cout << "*";

    for (int j = 0; j < space; j++) cout << " ";

    for (int j = 0; j < stars; j++) cout << "*";

    cout << endl;
  }

  return 0;
}