// singly linked list
#include <iostream>
#include <stdlib.h>
using namespace std;
struct Student
{
    int roll_no;
    char name[20];
    struct Student *link; // self referencial pointer
};
void display(struct Student *ptr)
{
    if (ptr == NULL)
    {
        cout << "List is empty" << endl;
    }
    else
    {
        while (ptr)
        {
            cout << ptr->roll_no << " " << ptr->name << endl;
            ptr = ptr->link;
        }
    }
}
struct Student *addLast(struct Student *ptr)
{
    struct Student *newnode = NULL, *temp = NULL;
    newnode = (struct Student *)calloc(1, sizeof(struct Student));
    if (newnode == NULL)
    {
        cout << "Node not created" << endl;
    }
    else
    {
        // initialization of newnode
        cout << "enter roll no" << endl;
        cin >> newnode->roll_no;
        cout << "enter name" << endl;
        cin >> newnode->name;
    }
    // link to the list
    if (ptr == NULL)
    {
        // add node as first
        ptr = newnode;
    }
    else
    {
        temp = ptr;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = newnode;
    }
    return ptr;
}
int main()
{
    struct Student *head = NULL;
    int choice;
    while (true)
    {
        cout << "enter choice" << endl;
        cout << "1.Add_Last\n2.Display\n3.Exit\n"
             << endl;
        cin >> choice;
        switch (choice)
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