#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr) {
  int n = arr.size();

  for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

// selection Sort
void descendingSelectionSort(vector<int> &arr) {
  int n = arr.size();
  int minIndex;

  for (int i = n - 1; i > 0; i--) {
    minIndex = i;
    for (int j = i - 1; j >= 0; j--) {
      if (arr[minIndex] > arr[j]) {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }
}

// bubble Sort
void descendingBubbleSort(vector<int> &arr) {
  int n = arr.size();
  bool isSwapped;

  for (int i = n - 1; i > 0; i--) {
    isSwapped = false;
    for (int j = 0; j < i; j++) {
      if (arr[j] < arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSwapped = true;
      }
    }

    if (!isSwapped) break;
  }
}

// recursive bubble Sort
void descendingBubbleSortRecursive(vector<int> &arr, int i) {
  if (i <= 0) return;
  bool isSwapped = false;

  for (int j = 0; j < i; j++) {
    if (arr[j] < arr[j + 1]) {
      swap(arr[j], arr[j + 1]);
      isSwapped = true;
    }
  }

  if (!isSwapped) return;
  descendingBubbleSortRecursive(arr, i - 1);
}

// insertion sort
void descendingInsertionSort(vector<int> &arr) {
  int n = arr.size();

  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] > arr[j - 1])
        swap(arr[j], arr[j - 1]);
      else
        break;
    }
  }
}

// insertion recursive sort
void descendingInsertionSortRecursive(vector<int> &arr, int i) {
  if (i <= 1) return;

  for (int j = i; j > 0; j--) {
    if (arr[j] > arr[j - 1])
      swap(arr[j], arr[j - 1]);
    else
      return;
  }

  descendingInsertionSortRecursive(arr, i - 1);
}

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // 1.  Update Selection Sort to arrange elements in descending order.
  // descendingSelectionSort(arr);

  // 2.   Update Bubble Sort to arrange elements in descending order.
  // descendingBubbleSort(arr);

  // 3.  Update Recursive Bubble Sort to arrange elements in descending order.
  // descendingBubbleSortRecursive(arr, n - 1);

  // 4.  Update Insertion Sort to arrange elements in descending order.
  // descendingInsertionSort(arr);

  // 5.  Update Recursive Insertion Sort to arrange elements in descending
  // order.
  // descendingBubbleSortRecursive(arr, n-1);

  // 6.  Update Merge Sort (merge step) to arrange elements in descending order
  // && Update Quick Sort (partition step) to arrange elements in descending
  // order.

  printArray(arr);
}

/*












*/
