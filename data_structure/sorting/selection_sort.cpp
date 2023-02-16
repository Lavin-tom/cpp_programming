//selection sort

#include <iostream>
using namespace std;
void setArray(int arr[],int n){
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

void selectionSort(int arr[], int n){
    int temp;
    for (int i = 0; i < n-1; i++){
	for (int j = i+1; j < n; j++){
	    if (arr[i] > arr[j]){
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
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
    selectionSort(arr, n);
    getArray(arr,n);
}
