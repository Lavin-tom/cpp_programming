//class templates
//member function outside the class

#include<iostream>
using namespace std;

//templates
template<class type>
class A
{
	type a[5];
	public:
	void set_data();
	void print_data();
	void sort_data();
	void reverse_data();
};
//class A is templated class so mention type
//function are also template function so provide function argument
	template<class type>
	void A<type>::set_data()
	{
		cout<<"enter array element"<<endl;
		for(int i=0;i<5;i++)
		{
			cin>>a[i];
		}
	}

	template<class type>
	void A<type>::print_data()
	{
		for(int i=0;i<5;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	
	template<class type>
	void A<type>::sort_data()
	{
		type temp;
		for(int i=0;i<5;i++)
		{
		 	for(int j=0;j<5;j++)
			{
				if(a[i]<a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}

	template<class type>
	void A<type>::reverse_data()
	{
		int i,j;
		type temp;
		for(i=0,j=4;i<j;i++,j--)
		{	
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
int main()
{
	A<int> obj;
	obj.set_data();
	obj.print_data();
	obj.sort_data();
	obj.print_data();
	obj.reverse_data();
	obj.print_data();

	A<char> obj1;
	obj1.set_data();
	obj1.print_data();
	obj1.sort_data();
	obj1.print_data();
	obj1.reverse_data();
	obj1.print_data();

	A<float> obj2;
	obj2.set_data();
	obj2.print_data();
	obj2.sort_data();
	obj2.print_data();
	obj2.reverse_data();
	obj2.print_data();
}
