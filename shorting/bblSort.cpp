#include<iostream>
using namespace std;

void bblSort(int arr[],int s)
{
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
			if(arr[i] > arr[j])
			{
				int t= arr[i];
				arr[i]=arr[j];
				arr[j]=t;
			}
		}
	}
	
}
int main ()
{
	int arr[]={1,5,4,5,9,8,9,9,7,8,9,77,899,77,8,99,88,77};
	int s;
	s=arr[]/4;



	return 0;
}
