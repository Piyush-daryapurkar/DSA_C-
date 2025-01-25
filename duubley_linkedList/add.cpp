#include <iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;    
};
Node *head = NULL;

void insert(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = head;
    newNode->prev = NULL;
   
    if(head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;    

}

void insertAtEnd(int x)
{
    Node *newNode = new Node;
    newNode->data = x;
    newNode->next = NULL;
    newNode->prev = NULL;
   
    if(head == NULL)
    {
        insert(x);
        return;
    }
   
    Node *temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtPos(int pos, int x)
{
    if(head == NULL)
    {
        insert(x);
        return;
    }
    Node *newNode  = new Node;
    newNode->data = x;
    Node *temp = head;
   
    for(int i=1; i<pos-1 && temp != NULL; i++)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        cout<<"You enter invalid position"<<endl;
        return;
    }
   
    newNode->prev = temp;
    newNode->next = temp->next;
    temp->next = newNode;
    temp->next->prev = newNode;
   
}

void show()
{
    if(head == NULL)
    {
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    Node *temp = head;
   
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
   
}


int main()
{
    insert(11);
    insert(22);
    insert(33);
//    show();
//    insert(12);
//    insert(23);
//    insert(45);
    insertAtEnd(100);
    show();
    insertAtPos(2,123);
    show();
    insertAtPos(7,125);
    show();
    return 0;
}