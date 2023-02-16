// Merge sort implementation

#include <iostream>
using namespace std;

// Merge two subarrays L and M into arr
void merge(int arr[], int l, int middle, int r) {
  
  // Create L ← A[l..middle] and M ← A[middle+1..r]
  int n1 = middle - l + 1;
  int n2 = r - middle;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
  for (int j = 0; j < n2; j++)
    M[j] = arr[middle + 1 + j];

  // Maintain current index of sub-arrays and main array
  int i, j, k;
  i = 0;
  j = 0;
  k = l;

  // Until we reach either end of either L or M, pick larger among
  // elements L and M and place them in the correct position at A[p..r]
  while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }

  // When we run out of elements in either L or M,
  // pick up the remaining elements and put in A[p..r]
  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = M[j];
    j++;
    k++;
  }
}

// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[], int l, int r) {
  if (l < r) {
    // m is the point where the array is divided into two subarrays
    int middle = l + (r - l) / 2;

    mergeSort(arr, l, middle);
    mergeSort(arr, middle + 1, r);

    // Merge the sorted subarrays
    merge(arr, l, middle, r);
  }
}

// Print the array
void printArray(int arr[], int size) {
  for (int i = 0; i < size; i++)
    cout << arr[i] << " ";
  cout << endl;
}

//get array element
void setArray(int arr[], int n){
  cout<<"enter array elements"<<endl;
  for (int i=0;i<n;i++)
    cin>>arr[i];
}

// Driver program
int main() {
  int n;
  cout<<"enter array size"<<endl;
  cin>>n;

  int arr[n];
  setArray(arr, n);
  mergeSort(arr, 0, n-1);

  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}
