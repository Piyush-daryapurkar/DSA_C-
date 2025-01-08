#include<iostream>
using namespace std;
int arr[100];
int n;

void input()
{
	cout<<"enter the range of array";
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
	int x,pos;
	cout<<"enter new data";
	cin>>x;
	cout<<"in which position ";
	cin>>pos;
	
	for(int i=n;i>=pos;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[pos]=x;
	n++;
	
}

int main ()
{
	input();
	cout<<"orignal array"<<endl;
	display();
	add();
	cout<<"updated array";
	display();



	return 0;
}
