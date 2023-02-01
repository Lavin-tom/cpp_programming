// Quick sort implementation

#include <iostream>
using namespace std;

//to divide the array
int partition(int arr[], int l, int r) {
  int pivot = arr[l];
  int start = l;
  int end = r;
  int temp;

  while(start < end){
    while(arr[start] <= pivot){
      start ++;
    }
    while(arr[end] > pivot){
      end --;
    }
    if(start < end){
      temp = arr[start];
      arr[start] = arr[end];
      arr[end] = temp;
    }
  }
  temp = arr[l];
  arr[l] = arr[end];
  arr[end] = temp;

return end;
}

//quick sort algorithm
void quickSort(int arr[], int l, int r) {
  int loc;
  if( l < r){
    loc = partition(arr, l, r);
    quickSort(arr, l, loc -1);
    quickSort(arr, loc+1, r);
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
  quickSort(arr, 0, n-1);

  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}
