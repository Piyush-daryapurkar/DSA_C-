#include<iostream>
int stack[5],n=5,top=-1;
using namespace std;
void pop()
{
	if(top == -1)
	{
		cout<<"stack is alredy .uderflow"<<endl;
		return;
	}
	cout<<"pop returns (deleted)  element: "<<stack[top]<<endl;
	top--;
int main ()
{
	pop();
	return 0;
}
