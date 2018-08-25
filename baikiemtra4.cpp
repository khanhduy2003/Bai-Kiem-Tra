#include <iostream>
using namespace std;
main()
{
int arr[20];
int temp;
for (int i ;i < 20 ; i++)
{
	cin >> arr[i];
}
	cout << "Cac phan tu sap xep tu nho den lon la: " << endl;
	for(int i = 0; i < 20 - 1; i++)
	{
	for(int j = i + 1; j < 20; j++)
	{
	if(arr[i] > arr[j])
	{
	temp = arr[j];
	arr[j] = arr[i];
	arr[i] = temp;
	}
	}
	}	
	for(int i = 0; i < 20; i++)
	{
	cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Cac phan tu sap xep tu lon den nho la: " << endl;
	for(int i = 0; i < 20 - 1; i++)
	{
		for(int j = i + 1; j < 20; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}	
	for(int i = 0; i < 20; i++)
	{
		cout << arr[i] << "\t";
	}
}
