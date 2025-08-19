#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  char letter;
  cin >> n;

  letter = 'A' + n;

  for (int i = 0; i < n; i++) {
    letter--;
    for (int j = 0; j <= i; j++) {
      cout << (char)(letter + j) << " ";
    }

    cout << endl;
  }

  return 0;
}