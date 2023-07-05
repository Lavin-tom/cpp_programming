//array.cpp

void array :: setdata()
{
	cout<<"enter the elements"<<endl;
	for(int i=0;i<5;i++)
		cin>>a[i];
}
void array :: copy(array &obj)
{
	for(int i=0;i<5;i++)
		a[i]=obj.a[i];
}
array &array :: add(array &obj)
{
	static array temp;
	for(int i=0;i<5;i++)
		temp.a[i]=a[i]+obj.a[i];
	return temp;

}	
array &array :: sub(array &obj)
{
        static array temp;
        for(int i=0;i<5;i++)
                temp.a[i]=a[i]-obj.a[i];
        return temp;

}
bool array :: cmp(array &obj)
{
        for(int i=0;i<5;i++)
	{
		if(a[i]!=obj.a[i])
			return false
		return true

	}
}
void array :: display()
{
        cout<<"elements of the array"<<endl;
        for(int i=0;i<5;i++)
                cout<<a[i]<<" ";
	cout<<endl;

}
