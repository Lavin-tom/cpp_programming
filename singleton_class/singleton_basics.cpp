#include<iostream>
using namespace std;
class Singleton
{
    static Singleton* instance;
    private:
        Singleton(){}       //private constr
    public:
        static Singleton* getInstance()
        {
            if(instance == 0)
                instance = new Singleton();
            return instance;
        }
};
Singleton* Singleton::instance = 0;
int main()
{
    Singleton *ptr1,*ptr2;
    ptr1 = Singleton::getInstance();
    cout<<ptr1<<endl;
    
    ptr2 = Singleton::getInstance();
    cout<<ptr2<<endl;
}