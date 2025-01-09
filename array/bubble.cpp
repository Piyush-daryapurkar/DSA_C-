#include<iostream>
using namespace std;
int main ()
{
	
	int arr[]={7,8,9,8,7,9,9,7,7,9,8,77,88,99,4,6,32,21,12};
	int s=sizeof(arr)/4;
	int t;
	
	cout<<"orignal array";
	
	for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=0+1;i<s;i++)
	{
		for(int j=0;j<s;j++)
		{
			if(arr[i]<arr[j])
			{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
			
		
			}
		
			
		}
	}	
			cout<<endl;

	
	
			cout<<"orignal array";

	
	  for(int i=0;i<s;i++){
		cout<<arr[i]<<" ";
	}



	return 0;
}
