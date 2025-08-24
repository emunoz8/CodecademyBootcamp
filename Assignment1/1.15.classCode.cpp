#include <bits/stdc++.h>
using namespace std;

void printPattern(int n)  // n = 7
{
  int invert = n / 2 + 1;  // invert = 4

  for (int i = 1; i <= invert; i++) {
    for (int j = 0; j < invert - i; j++) {
      cout << " ";
    }
    for (int j = 0; j < 2 * i - 1; j++) {
      if (j >= i) {
        cout << j - i + 2;
      } else
        cout << i - j;
    }
    cout << endl;
  }

  for (int i = invert; i > 1; i--) {
    for (int j = 0; j <= invert - i; j++) {
      cout << " ";
    }

    for (int j = 1; j < 2 * i - 2; j++) {
      if (j >= i) {
        cout << j - i + 2;
      } else
        cout << i - j;
    }

    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;

  printPattern(n);

  return 0;
}