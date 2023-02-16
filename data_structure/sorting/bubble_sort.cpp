//bubble sort

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

//bubble sort algorithm
void bubbleSort(int arr[], int n){
    int temp;
    for (int i = 0; i < n; i++){
	for (int j = 0; j < n-i-1; j++){
	    if (arr[j] > arr[j+1]){
		temp = arr[j];
		arr[j] = arr[j+1];
		arr[j+1] = temp;
	    }
	}
    }
}
int main(){
    int n;
    cout<<"enter array size"<<endl;
    cin>>n;
    int arr[n];
    setArray(arr,n);
    bubbleSort(arr, n);
    getArray(arr,n);
}
