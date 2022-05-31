void Complex :: SetData()
{
	cout<<"enter the real and img:"<<endl;
	cin>>real>>img;
}

void Complex :: Display()
{
	/** printing the values i the equation format like a+bJ ***/
	cout<<real;
	if(img>0)
		cout<<"+";
	cout<<img<<"J"<<endl;
}

Complex & Complex :: Add(Complex &e)
{
	static Complex temp;
	temp.real=real+e.real;
	temp.img=img+e.img;
	return temp;
}

Complex Complex :: Sub(Complex e)
{
	Complex temp;
	temp.real=real-e.real;
	temp.img=img-e.img;
	return temp;
}










