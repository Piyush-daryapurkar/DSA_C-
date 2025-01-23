#include<iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
};
Node *head  = NULL;

void insert(int x)
{
	Node *newNode = new Node;
	newNode->data = x;
	newNode->next = head;
	head = newNode;
}

void delNode()
{
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	Node *temp=head;
	head=temp->next;
	delete temp;
}

void delNodeAE()
{
	if(head==NULL)
	{
		cout<<"list is empty"<<endl;
	}
	if(head->next==NULL)
	{
		head=head->next;
		delete head;
		
	}
	
	Node *temp=head;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	delete temp->next;
	temp->next=NULL;
}

void delNodeatPos(int pos)
{
	
}

void show()
{
	Node *temp = head;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next ;
	}
	cout<<endl<<endl;
}
int main ()
{
	insert(10);
	insert(11);
	insert(12);
	insert(14);
	show();
	delNode();
	show();
	delNodeAE();
	show();
	delNodeAE();
	delNodeAE();
	delNodeAE();
	show();



	return 0;
}