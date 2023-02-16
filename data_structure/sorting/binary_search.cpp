//bubble sort
// binary search

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

void selectionSort(int arr[], int n){
    int temp;
    for (int i=0; i<n; i++){
	for (int j=0; j<i; j++){
	    if (arr[i] < arr[j]){
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
	    }
	}
    }
}

void binarySearch(int arr[], int n, int data){

    int l = 0, r = n-1, middle,flag =0;
    while(l<=r){
	middle = (l+r)/2;

	cout<<middle<<endl;
	if(arr[middle] == data){
	    flag =1;
	    break;
	}
	else if(arr[middle] < data){
	    l = middle + 1;
	}
	else {
	    r = middle - 1;
	}
	if(flag == 0)
	    cout<<"not found"<<endl;
    }
}
int main(){
    int n,data;
    cout<<"enter array size"<<endl;
    cin>>n;
    int arr[n];
    setArray(arr,n);
    selectionSort(arr, n);
    getArray(arr,n);
    cout<<"enter data to search: "<<endl;
    cin>>data;
    binarySearch(arr, n, data);
}
