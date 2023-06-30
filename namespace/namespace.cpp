#include<iostream>
namespace firstNamespace
{
    void myfunction(void)
    {
        std::cout<<"Insider first Namespace block"<<std::endl;
    }
}
namespace secondNamespace
{
    void myfunction(void)
    {
        std::cout<<"Insider second Namespace block"<<std::endl;
    }
}
int main()
{
    firstNamespace::myfunction();
    secondNamespace::myfunction();
}