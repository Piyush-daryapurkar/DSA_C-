#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};

node *head = NULL;
void insert(int x)
{
	node *newNode = new node;
	newNode->data=x;
	newNode->next=head;
	head=newNode;
}
void show()
{
	node *temp = head;
	cout<<"\nElement of linkedlist";
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\n end of linkedlist";
}
void insertAT(int x)
{
	node *newNode = new node;
	newNode->data=x;
	newNode->next=NULL;
	
	node *temp=head;
	while(temp->next != NULL)
	{
		temp=temp->next;
	}
	temp->next=newNode;
	
}
int main ()
{
	insert(12);
	insert(15);
	insert(18);
	insert(17);
	insertAT(101);
	show();
	



	return 0;
}
