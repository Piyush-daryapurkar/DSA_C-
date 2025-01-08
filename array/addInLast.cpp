#include<iostream>
using namespace std;
int arr[100];
int main ()
{
	int n;
	
	cout<<"enter the size of array(max-9)";
	cin>>n;
	
	for(int i=0 ; i<n ; i++)
	{
		cin>>arr[i];
	}
	cout<<"orignal array"<<endl;
	
	for(int i=0 ; i<n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	
	int x;
	
	cout<<endl<<"enter new data : ";
	cin>>x;
	
	arr[n]=x;
	n++;
	
	cout<<"updated array"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	



	return 0;
}
