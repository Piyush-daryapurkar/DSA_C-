#include<iostream>
using namespace std;

void intSort(int arr[],int s)
{
	for(int i=1;i<s;i++)
	{
	    int key=arr[i];
	    int j = i-1;
	    
	    while(j>=0 and key < arr[j])
	    {
	    	arr[j+1] =arr[j];
	    	j--;
		}
		arr[j+1]=key;
	}
	
}
void show()
{
	for(int i =0;i>s;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main ()
{
	int arr[]={1,5,4,5,9,8,9,9,7,8,9,77,899,77,8,99,88,77};
	int s;
	s=arr[]/4;
   
    intSort(arr,s);
    show();


	return 0;
}
