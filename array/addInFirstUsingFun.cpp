#include<iostream>
using namespace std;
int arr[100];
int n=0;

void input()
{
	cout<<"enter the size of array";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}

void display()
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
}
void add()
{
	int x;
	for(int i=n;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	cout<<"enter new value add in first : ";
	cin>>x;
	
	arr[0]=x;
	n++;
}



int main ()
{
	
	input();
	cout<<"orignal array";
	display();
	add();
	cout<<"updated array"<<endl;
	display();



	return 0;
}
