//sort an array using templates
#include <iostream>
using namespace std;
#define size 5
template<class type>
void get_array(type arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
template<class type>
void sort_array(type arr[],int n){
	type temp;
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(arr[i]>arr[j]){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	get_array(arr,n);
}
int main(){
	char arr[] ={ 'f','z','m','b','k'};
	int arr1[] ={ 12,5,23,6,43};
	float arr2[] ={ 12.4, 23.5, 22.34, 12.3, 4.5};

	sort_array(arr,size);
	sort_array(arr1,size);
	sort_array(arr2,size);

}
