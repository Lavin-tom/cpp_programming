//singly linked list

#include<iostream>
#include<stdlib.h>
using namespace std;
struct Student
{
    int data;
    struct Student *link;
};
struct Student *addLast(struct Student *ptr)
{
    struct Student *newnode = NULL,*temp = NULL;
    newnode = (struct Student *) calloc(1,sizeof(struct Student));
    if(newnode == NULL)
    {
        cout<<"Node not created"<<endl;
    }
    else
    {
        cout<<"enter data"<<endl;
        cin>>newnode->data;

        if(ptr == NULL)
        {
            ptr = newnode;
        }
        else
        {
            temp = ptr;
            while(temp->link!=NULL)
            {
                temp = temp->link;
            }
            temp->link = newnode;
        }
    }
    return ptr;
}
void display(struct Student *ptr)
{
    if(ptr==NULL)
        cout<<"List is empty"<<endl;
    else
    {
        while(ptr)
        {
            cout<<ptr->data<<endl;
            ptr = ptr->link;
        }
    }
}
int main()
{
    int option;
    struct Student *head = NULL;
    while(true)
    {
            cout<<"choose any option"<<endl;
            cout<<"1.Add Last 2.Dispaly 3.Exit"<<endl;
            cin>>option;

            switch (option)
            {
            case 1:
                head = addLast(head);
                break;
            case 2:
                display(head);
                break;
            case 3:
                exit(0);
                break;
            }
    }
}