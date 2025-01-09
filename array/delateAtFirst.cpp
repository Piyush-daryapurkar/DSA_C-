#include<iostream>
using namespace std;

void delData(int arr[],int s)
{
	for(int i=0;i<s;i++)
	{
		arr[i]=arr[i+1];
	}
	cout<<endl;
	cout<<"updated : ";
	for(int i=0;i<40;i++)
	{
		cout<<arr[i]<<" ";
	}
}


int main ()
{
	int arr[]={1,2,3,4};
	int s=sizeof(arr)/4;
//	cout<<s;

     cout<<"orignal aaray : ";
     for(int i=0 ; i<s;i++)
     {
     	cout<<arr[i]<<" ";
	 }
	 
	 delData(arr,s);
	 

	return 0;
}
