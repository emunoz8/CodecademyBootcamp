#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int space;
  cin >> n;

  space = n;

  cout << "Solid Rhombus :" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < space; j++) cout << " ";

    for (int j = 0; j < n; j++) cout << "*";

    cout << endl;

    space--;
  }

  cout << endl;

  space = n;

  cout << "Hollow Rhombus :" << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < space; j++) cout << " ";

    for (int j = 0; j < n; j++) {
      if ((j == 0) || (i == 0) || (j == n - 1)  || (i == n - 1))
        cout << "*";
      else
        cout << " ";
    }

    cout << endl;

    space--;
  }

  return 0;
}