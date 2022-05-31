//complex.h

class Complex
{
	int real,img;
	public : void SetData();
		 void Display();
		 Complex &Add(Complex &); //fun return object referance,function receiving object 
		 Complex Sub(Complex); //function returning object, function receiving an object
};
