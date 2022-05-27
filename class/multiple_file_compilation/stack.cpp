		void stack :: push()
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
		void stack :: pop()
		{
			if(top<0)
				cout<<"stack is empty"<<endl;
			else
			{
			cout<<stack[top]<<" poped out"<<endl;
			top--;
			}
		}
		void stack :: peek()
		{
			if(top<0)
			{
				cout<<"stack is empty"<<endl;
			}
			else
			cout<<"peek value is: "<<stack[top]<<endl;
		}
		void stack :: disp()
		{
			if(top<0)
				cout<<"nothing to show,stack is empty"<<endl;
			else
			{
			for(int i=0;i<=top;i++)
				cout<<" "<<stack[i];
			}
		}
		void stack :: menu()
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
