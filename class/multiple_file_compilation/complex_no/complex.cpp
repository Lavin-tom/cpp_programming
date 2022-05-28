//complex.cpp

void Complex :: setdata()
{
	cout<<"enter the real and img:"<<endl;
	cin>>real>>img;
}

void Complex :: display()
{
	cout<<real;
	if(img>0)
		cout<<"+";
	cout<<img<<"j"<<endl;
}
