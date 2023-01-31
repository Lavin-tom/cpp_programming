//binary search basics
//binary search - should have a sorted array
//middle = (l + r)/2
//if middle == data ---> stopping condition
//if arr[middle] < data  l= middle + 1
//if arr[middle] > data r = middle - 1
//if l>r then stop ---> not found

#include <iostream>
using namespace std;

void binarySearch(int arr[], int data){

    int l=0, r =4, middle;
    int flag = 0;

    while(l<=r){

	middle = (l+r)/2;

	if(arr[middle] ==  data){
	    cout<<"found"<<endl;
	    flag = 1;
	    break;
	    }
	else if(arr[middle] < data)
		l= middle + 1;
	else
		r = middle -1;
    }
    if(flag == 0)
	cout<<"not found"<<endl;
}


int main(){
    int arr[] = {12, 22, 32, 42, 52};
    int data;
    cout<<"enter data to search"<<endl;
    cin>>data;
    binarySearch(arr, data);
}
