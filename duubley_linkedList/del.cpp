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

void deleteNode()
{
	Node *temp = head;
	head=head->next;
	head->prev=NULL;
	
	delete temp;
}
void deleteEndNode()
{
	
	Node *temp=head;
	
	if(head == NULL)
	{
		cout<<"list is empty"<<endl;
	}
	
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	
	temp->prev->next=NULL;
	delete temp;
	
}

void deleteAtPos(int pos)
{
	Node *temp = head;
	 if(head==NULL)
	 {
	 	cout<<"List is alredy empty"<<endl;
	 	return;
	 }
	 if(pos <= 0)
	 {
	 	cout<<"you enter negative value"<<endl;
	 	return;
	 }
	 if(pos == 1)
	 {
	 	deleteNode();
	 	return;
	 }
	 
	 for(int i=1;i<pos && temp != NULL; i++)
	 {
	 	temp=temp->next;
	 }
	 if(temp==NULL)
	 {
	 	cout<<"enter invalid pos"<<endl;
	 	return;
	 }
	 if(temp->next != NULL)
	 {
	 	temp->next->prev = temp->prev;
	 }
	 if(temp->prev != NULL)
	 {
	 	temp->prev->next=temp->next;
	 }
	 delete temp;
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
    insert(12);
    insert(13);
    insert(14);
    show();
    deleteAtPos(2);
    show();

    return 0;
}
