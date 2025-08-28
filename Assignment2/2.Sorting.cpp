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

void descendingSelectionSortV2(vector<int> &arr) {
  int n = arr.size();
  int maxIndex;

  for (int i = 0; i < n - 1; i++) {
    maxIndex = i;

    for (int j = i + 1; j < n; j++)
      if (arr[maxIndex] < arr[j]) maxIndex = j;

    swap(arr[maxIndex], arr[i]);
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

// merge
void descendingMerge(vector<int> &arr, int left, int mid, int right) {
  int sizeA = mid - left + 1;
  int sizeB = right - mid;
  int i, j, k;

  vector<int> A(sizeA), B(sizeB);

  for (int x = 0; x < sizeA; x++) A[x] = arr[left + x];

  for (int x = 0; x < sizeB; x++) B[x] = arr[mid + 1 + x];

  i = 0;
  j = 0;
  k = left;

  while (i < sizeA && j < sizeB) arr[k++] = (A[i] >= B[j]) ? A[i++] : B[j++];

  while (i < sizeA) arr[k++] = A[i++];

  while (j < sizeB) arr[k++] = B[j++];
}

// mergeSort
void descendingMergeSort(vector<int> &arr, int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;

    descendingMergeSort(arr, left, mid);
    descendingMergeSort(arr, mid + 1, right);

    descendingMerge(arr, left, mid, right);
  }
}

// partition
int descendingPartition(vector<int> &arr, int left, int right) {
  int pivot = arr[right];
  int i = left - 1;

  for (int j = left; j < right; j++) {
    if (arr[j] > pivot) {
      i++;
      swap(arr[j], arr[i]);
    }
  }

  swap(arr[i + 1], arr[right]);

  return i + 1;
}

// quick sort
void descendingQuickSort(vector<int> &arr, int left, int right) {
  if (left < right) {
    int partitionIndx = descendingPartition(arr, left, right);

    descendingQuickSort(arr, left, partitionIndx - 1);
    descendingQuickSort(arr, partitionIndx + 1, right);
  }
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

  // descendingSelectionSortV2(arr);

  // 2.   Update Bubble Sort to arrange elements in descending order.
  // descendingBubbleSort(arr);

  // 3.  Update Recursive Bubble Sort to arrange elements in descending order.
  // descendingBubbleSortRecursive(arr, n - 1);

  // 4.  Update Insertion Sort to arrange elements in descending order.
  // descendingInsertionSort(arr);

  // 5.  Update Recursive Insertion Sort to arrange elements in descending
  // order.
  // descendingBubbleSortRecursive(arr, n - 1);

  // 6.  Update Merge Sort (merge step) to arrange elements in descending order
  // descendingMergeSort(arr, 0, n - 1);

  // 7.  Update Quick Sort (partition step) to arrange elements in descending
  // order.

  // descendingQuickSort(arr, 0, n - 1);

  printArray(arr);
}
