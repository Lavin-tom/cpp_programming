//reverse a string
#include<iostream>
using namespace std;
string reverse(string word)
{
    int length=0;
    while(word[length])
        length++;
        
    cout<<length<<endl;
    for(int i=0,j=length-1;i<j;i++,j--)
    {
        if(word[i]!=word[j])
        {
            //swap logic to swap if characters are different
            word[i] +=  word[j];
            word[j] =   word[i] - word[j];
            word[i] -=  word[j];
        }
    }
    return word;
}
int main()
{
    string word;
    cout<<"enter string"<<endl;
    cin>>word;
    cout<<reverse(word)<<endl;
}