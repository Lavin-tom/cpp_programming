#include<iostream>
using namespace std;
class mute
{
    private:
        int mutable x;
    public:
    mute()
    {
        x = 100;
    }
    mute(int value)
    {
        x = value;
    }
    void normalfun() const {
        cout<<x<<endl;
    }
};

int main()
{
    mute mn;
    mn.normalfun();
    mute(200);
}