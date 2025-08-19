#include <bits/stdc++.h>

#include <cmath>
using namespace std;

int main() {
  int n;
  int stars;
  int space = 0;
  int decline = 1;
  cin >> n;

  for (int i = 0; i < (n * 2); i++) {
    if (i == n) decline--;
    stars = abs(n - i - decline) + 1;

    if (i < n)
      space = (i * 2);
    else if (i > n)
      space -= 2;

    for (int j = 0; j < stars; j++) {
      cout << "*";
    }

    for (int j = 0; j < space; j++) {
      cout << " ";
    }

    for (int j = 0; j < stars; j++) {
      cout << "*";
    }

    cout << endl;
  }

  return 0;
}