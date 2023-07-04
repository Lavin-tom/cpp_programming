//stack 
//with class

#include<iostream>
#include<stdlib.h>
using namespace std;
class stack
{
	int data,top=-1,size=4;
	int stack[4];
	public: void push()
		{
			if(top==4)
				cout<<"stack is full"<<endl;
			else
			{
			cout<<"enter data to add"<<endl;
			cin>>data;
			top++;
			stack[top]=data;
			}
		}
		void pop()
		{
			if(top<0)
				cout<<"stack is empty"<<endl;
			else
			{
			cout<<stack[top]<<" poped out"<<endl;
			top--;
			}
		}
		void peek()
		{
			if(top<0)
			{
				cout<<"stack is empty"<<endl;
			}
			else
			cout<<"peek value is: "<<stack[top]<<endl;
		}
		void disp()
		{
			if(top<0)
				cout<<"nothing to show,stack is empty"<<endl;
			else
			{
			for(int i=0;i<=top;i++)
				cout<<" "<<stack[i];
			}
		}
		void menu()
		{
			int option;
			while(1)
			{
			cout<<endl<<"choose any option"<<endl;
			cout<<"1.push 2.pop 3.peek 4.disp 5.exit"<<endl;
			cin>>option;

			switch(option)
			{
				case 1: push();
					break;
				case 2: pop();
					break;
				case 3: peek();
					break;
				case 4: disp();
					break;
				case 5: exit(0);
			}
			}
		}
};
int main()
{
	stack obj;
	obj.menu();
	obj.disp();
	obj.push();
	obj.pop();
	obj.peek();
}

