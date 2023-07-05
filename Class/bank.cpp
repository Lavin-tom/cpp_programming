//simple bank prgm with class

#include<iostream>
using namespace std;
class bank
{
	int acc_no;
	float bal;
	char name[20];
	public :void deposit(float amt)
		{
			//bal=bal+amt;
			bal+=amt;
		}	
		bool withdraw(float amt)
		{
			if(amt<=bal)
			{
			bal-=amt;
			return true;
			}
			return false;
		}
		void balenq()
		{
			cout<<"Your current balance: "<<bal<<endl;
		
		}
		void setdata()
		{
			cout<<"enter the account no"<<endl;
			cin>>acc_no;
			cout<<"enter the name"<<endl;
			cin>>name;
			cout<<"enter balance"<<endl;
			cin>>bal;
		}
		void disp()
		{
			cout<<"Account no: "<<acc_no<<endl;
			cout<<"Name: "<<name<<endl;
			cout<<"Balance: "<<bal<<endl;
		}

		void menu()
		{
			int choice;
			float amt;
			while(1)
			{
				cout<<"choose any option"<<endl<<"1.Deposit 2.Withdraw 3.Balance Enq 4.Display 5.Exit"<<endl;
                        	cin>>choice;
				switch(choice)
				{
					case 1: cout<<"enter amount to be deposit"<<endl;
						cin>>amt;
						deposit(amt);
						break;
					case 2: cout<<"enter amount to withdraw"<<endl;
						cin>>amt;
						if(withdraw(amt))
							cout<<"withdrawal of amound "<<amt<<" sucess"<<endl;
						else
							cout<<"not sufficient balance"<<endl;
						break;
					case 3: balenq();
						break;
					case 4: disp();	
						break;
					case 5: return;
				}
			}
		}
};
int main()
{
	bank obj;
	obj.setdata();
	obj.menu();
	obj.balenq();
	obj.disp();

}
