#include<iostream>
using namespace std;
int arr[100];
int main ()
{
	int n,x;
	cout<<"enter size of array";
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"original array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"enter the value add in first : ";
	cin>>x;

	for(int i=n;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=x;
	n++;
	
	cout<<"updated array"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	
	
	
	



	return 0;
}
