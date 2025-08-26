#include <bits/stdc++.h>
using namespace std;

/*
{5, 3, 21, 7, 5};
{5, 3, 21, 7, 5}; i =1
{5, 3, 21, 7, 5}; i = 2
{5, 3, 5, 7, 21}; i =3

T.C. -> O(n^2)
S.C. -> Aux S.C. -> O(1)
*/
void selectionSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 0; i < n - 1; i++) {
    int minimumIdx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[minimumIdx] > arr[j]) {
        minimumIdx = j;
      }
    }
    swap(arr[i], arr[minimumIdx]);
  }
}

/*
{5, 3, 21, 7, 5} i = 4
3 5 21 7 5
3 5 7 21 5
5 5 7 5 21.  i = 3
T.C - > O(n^2) Worst Case Time Complexity
Best Case T.C. -> O(n)
S.C -> O(1)

1 2 3 4 5 -> O(n)
*/
void bubbleSort(vector<int> &arr) {
  int n = arr.size();
  bool isSwapped;
  for (int i = n - 1; i > 0; i--) {
    isSwapped = false;
    for (int j = 0; j < i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        isSwapped = true;
      }
    }
    if (isSwapped == false) {
      break;
    }
    cout << "Here" << endl;
  }
}
// S.C -> O(n)
void bubbleSortRecursive(vector<int> &arr, int endIdx) {
  if (endIdx == 0) {
    return;
  }
  bool isSwapped = false;
  for (int i = 0; i < endIdx; i++) {
    if (arr[i] > arr[i + 1]) {
      swap(arr[i], arr[i + 1]);
      isSwapped = true;
    }
  }
  if (!isSwapped) return;

  bubbleSortRecursive(arr, endIdx - 1);
}

// T.C -> O(n^2), S.C -> O(1)
// Best Case T.C. -> O(n^2)
void insertionSort(vector<int> &arr) {
  int n = arr.size();
  for (int i = 1; i < n; i++) {
    for (int j = i; j > 0; j--) {
      if (arr[j] < arr[j - 1]) {
        swap(arr[j], arr[j - 1]);
      } else
        break;
    }
  }
}

// Recursive Code for Insertion Sort
void insertionSortRecursive(vector<int> &arr, int idx) {
  if (idx >= arr.size()) return;

  for (int j = idx; j > 0; j--) {
    if (arr[j] < arr[j - 1]) {
      swap(arr[j], arr[j - 1]);
    } else
      break;
  }
  insertionSortRecursive(arr, idx + 1);
}

void mergeTwoSortedArrays(vector<int> &arr, int startIdx, int mid, int endIdx) {
  vector<int> tempArray;

  int i = startIdx, j = mid + 1;

  while (i <= mid || j <= endIdx) {
    if (i > mid) {
      tempArray.push_back(arr[j++]);
    } else if (j > endIdx) {
      tempArray.push_back(arr[i++]);
    } else {
      if (arr[i] < arr[j]) {
        tempArray.push_back(arr[i++]);
      } else
        tempArray.push_back(arr[j++]);
    }
  }

  // Copying Elements to main arr
  int k = startIdx;
  for (int i : tempArray) {
    arr[k++] = i;
  }
}

// MergeSort
void mergeSort(vector<int> &arr, int startIdx, int endIdx) {
  // Base Case
  if (startIdx >= endIdx) return;

  int mid = (startIdx + endIdx) / 2;

  mergeSort(arr, startIdx, mid);
  mergeSort(arr, mid + 1, endIdx);

  // Merge Both the sorted arrays
  mergeTwoSortedArrays(arr, startIdx, mid, endIdx);
}

// 4, 6, 2, 5, 7, 9, 1, 3
int partition(vector<int> &arr, int startIdx, int endIdx) {
  int pivot = arr[startIdx];

  int i = startIdx;
  int j = endIdx;
  cout << pivot << endl;
  cout << "i is : " << i << endl;
  cout << "j is: " << j << endl;

  while (i < j) {
    cout << "In while loop with i and j as: " << i << " " << j << endl;
    while (arr[i] <= pivot && i < endIdx) ++i;

    while (arr[j] > pivot && j > startIdx) --j;

    cout << "i is : " << i << endl;
    cout << "j is: " << j << endl;
    if (i < j) {
      swap(arr[i], arr[j]);
    }
    for (int k : arr) {
      cout << k << " ";
    }
    cout << endl;
  }
  swap(arr[startIdx], arr[j]);

  cout << "After FInal Swap" << endl;
  for (int k : arr) {
    cout << k << " ";
  }
  cout << endl;
  cout << "*************" << endl;
  return j;
}

void quickSort(vector<int> &arr, int startIdx, int endIdx) {
  if (startIdx >= endIdx) return;

  int partitionIdx = partition(arr, startIdx, endIdx);

  quickSort(arr, startIdx, partitionIdx - 1);
  quickSort(arr, partitionIdx + 1, endIdx);
}

int main() {
  vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};

  // sort(arr.begin(), arr.end());
  quickSort(arr, 0, 7);
  // cout << "*************" << endl;
  // for(int i: arr)
  // {
  //     cout << i << " ";
  // }
  return 0;
}
