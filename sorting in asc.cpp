#include<iostream>
using namespace std;

void ascending_order(int arr[10], int num)
{
		for (int a = 0; a < 10 - 1; a++) 
		{
			for (int b = 0; b < 10 - a - 1; b++)
			{
				if (arr[b] > arr[b + 1])
				{
					int temp = arr[b];
					arr[b] = arr[b + 1];
					arr[b + 1] = temp;
				}
			}
		}
}
int main()
{
	int arr[10] = {},num;
	cout << "Enter the array:" << endl;
	for (int a = 0; a < 10; a++)
	{
		cin >> arr[a];
	}
	cout << endl;
	cout << "Array is:";
	for (int a = 0; a < 10; a++)
	{
		cout << " " << arr[a];
	}
	cout << endl;
	ascending_order( arr, num);
	cout << "Ascending Order:";
	for (int a = 0; a < 10; a++)
	{
		cout << " " << arr[a];
	}
	
	return 0;
}
