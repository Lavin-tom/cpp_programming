//insertion  sort

#include <iostream>
using namespace std;
void setArray(int arr[], int n){
    cout<<"enter array elements"<<endl;
    for(int i=0; i<n; i++){
	cin>>arr[i];
    }
}

void getArray(int arr[], int n){
    for (int i=0; i<n; i++)
	cout<<arr[i]<<" ";
    cout<<endl;
}

//insertion sort algorithm
void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
	    int temp = arr[i];
	    int j = i-1;
	while (j >= 0 && arr[j] > temp){
	    arr[j+1] = arr[j];
	    j--;
	}
	arr[j+1] = temp;
    }
}
int main(){
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int arr[n];
    setArray(arr,n);
    insertionSort(arr, n);
    getArray(arr,n);
}
