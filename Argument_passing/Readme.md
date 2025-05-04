### Argument Passing

#### Call by Value:

- In call by value, the function receives a copy of the value of the argument passed to it.

- The function operates on the copy, and any modifications made inside the function do not affect the original value in the calling code.
- Changes made to the function parameters are confined within the function's scope.
- This mechanism is useful when you want to work with the value of the argument without modifying it in the calling code.

``` cpp
//call by value
//swapping not done properly because here we use call by value

#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n1,n2;
	cout<<"enter first and second nos"<<endl;
	cin>>n1>>n2;
	
	cout<<"no before swapping"<<endl;
  cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;

	swap(n1,n2);
	cout<<"no after swapping"<<endl;
	cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;
}
```
#### Call by Reference:

- In call by reference, the function receives a reference to the memory location of the argument passed to it.
- Any modifications made to the parameter inside the function directly affect the original value in the calling code.
- Changes made to the reference parameter are visible both inside and outside the function.
- This mechanism is useful when you want to modify the value of the argument and have those modifications reflected in the calling code.

```cpp
//call by referance
//swapping of two integers using call by referance concept

#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n1,n2;
	cout<<"enter first and second nos"<<endl;
	cin>>n1>>n2;
	
	cout<<"no before swapping"<<endl;
    cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;

	swap(n1,n2);
	cout<<"no after swapping"<<endl;
	cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;
}
```
#### Call by Address:

- In call by address, the function receives the address of the argument passed to it.
- By dereferencing the address, the function can access and modify the value stored at that memory location.
- Changes made to the value at the address are visible both inside and outside the function.
- This mechanism is similar to call by reference but explicitly uses pointers to pass and manipulate the arguments.

```cpp
//call by address
//swapping of two integers using call by address concept

#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int n1,n2;
	cout<<"enter first and second nos"<<endl;
	cin>>n1>>n2;
	
	cout<<"no before swapping"<<endl;
    cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;

	swap(&n1,&n2);
	cout<<"no after swapping"<<endl;
	cout<<"no1:"<<n1<<endl<<"no2:"<<n2<<endl;
}
```

---
[Back](https://github.com/Lavin-tom/cpp_programming/tree/master/Reference_operator)
[Next](https://github.com/Lavin-tom/cpp_programming/tree/master/Namespace)
