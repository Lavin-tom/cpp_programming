//login and registration system -using c++

#include <cstdio>
#include <iostream>
#include<fstream>
using namespace std;

int flag =0;

class User{

    private:
        char userName[20];
        int mobNo;
        char emailId[20];

    public:
        void setDetails(){
        cout<<"enter username"<<endl;
        cin>>userName;
        cout<<"enter mobile no"<<endl;
        cin>>mobNo;
        cout<<"enter email address"<<endl;
        cin>>emailId;
    }
        int validateDetails(){
        int key;
        flag=0;
        //user name validation
        for(int i=0;userName[i];i++){
            if((userName[i] >= 97 && userName[i] <= 122) || (userName[i] >= 65 && userName[i] <= 90)){
                flag=1;
                continue;
            }
            else{
                cout<<"user name not contain any type of special character other than alphabets"<<endl;
                flag=0;
                cout<<"press any key to retry"<<endl;
                cin>>key;
            }
        }
        //email id validation
        int eflag1=0,eflag2=0;
        for(int i=0;emailId[i];i++){
            if(emailId[i]=='@')
                eflag1=1;
            else if(emailId[i]=='.')
                    eflag2=1;
            }
        if(eflag2 && eflag1)
            flag=1;
        else{
                cout<<"your email address is not valid"<<endl;
                flag=0;
                cout<<"press any key to retry"<<endl;
                cin>>key;
            }

        int temp = mobNo,length=0;
        while(temp){
            length++;
            temp/=10;
        }
        if(length==10)
            flag=1;
        else{
            cout<<"your mobile no is not valid"<<endl;
            flag=0;
            cout<<"press any key to retry"<<endl;
            cin>>key;
        }
        return flag;
    }
    void loginSucess(){
        int k;
        system("clear");
        cout<<"Hai "<<userName<<endl;
        cout<<"How are you\n"<<endl;
        cout<<"enter 1 to quit"<<endl;
        cin>>k;
    }
    void dataBase(){
        ofstream fout("database.txt");
        if(fout.fail()){
            cout<<"Database error..!!"<<endl; 
            exit(0);
        }
        fout<<"yes it is working"<<endl;
        fout<<"User name: "<<userName<<endl;
        fout<<"Email id: "<<emailId<<endl;
        fout<<"Mobile no: "<<mobNo<<endl;
        fout.close();
    }
    void displayDetails(){
        cout<<"username:"<<userName<<endl;
        cout<<"mobNo"<<mobNo<<endl;
        cout<<"email"<<emailId<<endl;
    }
};


int main(){
    
    User obj;

    int option;
    while(true){
        system("clear");
        cout<<"Testing of Login"<<endl;
        cout<<"1. Registration"<<endl<<"2. Login"<<endl<<"3. Quit"<<endl;
        cin>>option;

        switch(option){
            case 1:
                    cout<<"Registration"<<endl;
                    cout<<"------------"<<endl;
                    obj.setDetails();
                    flag = obj.validateDetails();
                    if(flag==1){
                        obj.loginSucess();
                        obj.dataBase();
                    }
                    break;
            case 2:
                    cout<<"Login"<<endl;
                    cout<<"-----"<<endl;
                    break;
            case 3:
                    cout<<"we will miss you!!"<<endl;
                    exit(0);
        }
    }
}
