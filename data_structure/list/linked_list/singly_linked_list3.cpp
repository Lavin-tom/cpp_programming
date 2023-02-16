// singly linked list

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next; // struct Node *link;
};

class LinkedList
{
public:
    Node *head;

    // constructor
    LinkedList()
    {
        head = NULL;
    }

    //member function
    void insert(int value)
    {
        Node *newNode = new Node();
        newNode->data = value;
        newNode->next = NULL;

        if (head == NULL)
        {
            head = newNode;
        }
        else
        {
            Node *curr = head;
            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = newNode;
        }
    }
    void printList()
    {
        Node *curr = head;
        if (curr == NULL)
        {
            cout << "List is empty" << endl;
        }
        else
        {
            while (curr)
            {
                cout << curr->data << " ";
                curr = curr->next;
            }
        }
        cout << endl;
    }
};
int main()
{
    LinkedList list; // object creation
    list.insert(1);
    list.insert(3);
    list.insert(5);
    list.printList();
}   