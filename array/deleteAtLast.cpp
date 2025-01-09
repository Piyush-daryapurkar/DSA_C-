#include<iostream>
using namespace std;
int main ()
{
		int n1, n2, n;
	int arr[] = {1,2,3,4,5,6,7,8,9,10,23,34,45,56,67};
	int brr[] = {11,22,33,44,55,66,77,88,2,34,23,4,23,4,23,4,};
	
	n1 = sizeof(arr)/4;
	n2 = sizeof(brr)/4;
	n = n1+n2;
	int crr[n];
	
	for(int i =0; i <n1; i++)
	{
		crr[i] = arr[i];
	}
	for(int i=n1,j=0;i<n; i++, j++)
	{
		crr[i] = brr[j];
	}
	
	cout<<"Arrays are: "<<endl;
	for(int i=0; i<n; i++) cout<<crr[i]<<" ";
	cout<<endl;	
	for(int i=0; i<n1; i++) cout<<arr[i]<<" ";
	cout<<endl;	
	for(int i=0; i<n2; i++) cout<<brr[i]<<" ";
	cout<<endl;



	return 0;
}
