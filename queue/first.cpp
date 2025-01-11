#include<iostream>
using namespace std;
#define n 5

int queue[n];
int f = -1;
int r = -1;
 
void enqueue(int x)
{
	if(r==n-1)
	{
		cout<<"queue id lredy full"<<endl;
		return;
	}
	if(f == -1)
	{
		f=0;
	}
	r++;
	
	enqueue[r]=x;
	cout<<"you add new element in enque"<<x<<endl;
}

int main ()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	enqueue(7);



	return 0;
}
