#include <iostream>
using namespace std;

int arr[100];
int n = 0;

void input() 
{
    cout << "Enter the size of array (max-9): ";
    cin >> n;
  
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
}

void display() 
{
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void add() 
{

    int x;
    cout << "Enter new data: ";
    cin >> x;
    arr[n] = x;
    n++;
    cout << "data add successfully." << endl;
}
int main()
{
 
    input();
    
    cout << "original array:" << endl;
    display();
    
    add();
    
	cout << "Updated array:" << endl;
    display();
    
    return 0;
}
