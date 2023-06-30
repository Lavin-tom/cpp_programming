#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Hello";
    cout<<str<<endl;

    //Accessing individual character
    //Accessing individual characters: str[i], str.at(i)
    cout<<str[0]<<endl;     //method one
    cout<<str.at(0)<<endl;  //methond two

    //Length of string
    //Length: str.length(), str.size()
    cout<<"Length of string: "<<str.length()<<endl;     //method one
    cout<<"Length of string: "<<str.size()<<endl;       //method two

    //concatenation
    //Concatenation: str1 + str2, str1.append(str2)
    string str2 = "World";
    cout<<str+str2<<endl;           //method one
    cout<<str.append(str2)<<endl;   //method two

    //extraction
    //Substring extraction: str.substr(startIndex, length)
    cout<<str.substr(0,5)<<endl;   

    //substring
    //Searching for substrings: str.find(substring), str.rfind(substring)
    cout<<str.find("World")<<endl;  //method one
    cout<<str.rfind("World")<<endl; //method two

    //modifying string
    str.replace(5,4,"everyone!");   //replace 4 characters and add "everyone" from 5 th index position
    cout<<str<<endl;

    str.erase(5,7);             //deleting 7 characters from index 5
    cout<<str<<endl;

    str.insert(5,"everyone!");
    cout<<str<<endl;
    
    //comaparison
    //Comparison: str1 == str2, str1 < str2, etc.
    if(str==str2)
        cout<<str<<" and "<<str2<<" are same"<<endl;
    else
        cout<<str<<" and "<<str2<<" are not same"<<endl;


    string str3;
    cin>>str3;
    cout<<str3<<endl;
    string str4;
    getline(cin,str4);      //to print string with space
    cout<<str4<<endl;
}