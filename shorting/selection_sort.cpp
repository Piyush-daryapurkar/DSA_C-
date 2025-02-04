#include<iostream>
using namespace std;
int arr[]={14,55,66,54,45,6,9,8,7,4,10};
int n=sizeof(arr)/4;

void selection_sort()
{
    for(int i=0;i<n;i++)
    {
    	int min=i;
    	for(int j=0;j<n;j++)
    	{
    		if(arr[j]>arr[min])
    		{
    			swap(arr[j],arr[min]);
			}
		}
		swap(arr[min],arr[i]);

	}
}
void show()
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main ()
{


show();
selection_sort();
show();


	return 0;
}
