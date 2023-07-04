#include<iostream>
using namespace std;
class Copy
{
    int x,y;

    public:
        Copy()
        {
            cout<<"default constructor"<<endl;
            x=10;
            y=20;
        }
        //copy constr
        Copy(Copy& obj)
        {
            x = obj.x;
            y = obj.y;
        }
        void display()
        {
            cout<<"x: "<<x<<" y: "<<y<<endl;
        }
};
int main()
{
    Copy cp;
    cp.display();
    Copy cp1(cp);   //copy constructor
    cp1.display();
}