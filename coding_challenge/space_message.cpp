//space message
#include<iostream>
using namespace std;
void decode(string msg)
{
    string temp = "";
    string temp1 = "";
    cout<<msg.size()<<endl;
    int k = 0,m,c=0;
    for(int i=0;msg[i];i++)
    {
        temp1 = "";
        c=0;
        if((msg[i] >= 97 && msg[i]<=122) || (msg[i]>=65 && msg[i]<=90))
        {
            temp += msg[i];
        }
        else if (msg[i]>48 && msg[i]<=58)
        {
            k = (int)msg[i] - 48;
            m = i+1;
            while(msg[m]!=']')
            {
                temp1 += msg[m];
                m++;
                c++;
            }
            for(int j=1;j<=k;j++)
            {
                temp += temp1;
            } 
        }
        i += c;
    }
    temp += '\0';
    cout<<temp<<endl;
}
int main(){
    string msg;
    cout<<"enter string\n";
    getline(cin,msg);

    decode(msg);
}