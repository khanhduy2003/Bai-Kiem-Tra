#include <iostream>
using namespace std;
main()
{
	int n;
	cout << "Nhap vao so phan tu cua mang: " << endl;
	cin >> n;
    int tong =0, arr[n];
	for(int i=0;i<n;i++)
	{
	cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
	tong +=arr[i];
	}
	cout << "tong mang:" << tong << endl;
   	for(int i=0;i<n;i++)
    {
    	if(arr[i]%2==0)
    	{
    		cout << arr[i] << "la so chan" << endl;
		}
		else
		{
			cout << arr[i] << "la so le" << endl;
		}
    }
    int sumLe =0;
   	for(int i=0;i<n;i++)
    {
    	if(arr[i]%2!=0)
    	{
    	  sumLe+=arr[i];
    	}
    }
    cout << " tong cac so le la " << sumLe << endl;
    int sumchan =0;
   	for(int i=0;i<n;i++)
    {
	    if(arr[i]%2==0)
	    {
	    	sumchan +=arr[i];
		}
	} 
	cout << " tong cac so chan la" << sumchan << endl;
    int max = arr[0];
	for(int i=0;i<n;i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}
	}
	cout << "Phan tu lon nhat cua mang la: " << max << endl;
	int min = arr[0];
	for(int i=0;i<n;i++)
	{
		if(min > arr[i])
		{
			min = arr[i];
		}
	}
	cout << "Phan tu lon nhat cua mang la: " << min << endl;
	int temp;
	cout << "Cac phan tu sap xep tu nho den lon la: " << endl;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}	
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	cout << "Cac phan tu sap xep tu lon den nho la: " << endl;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}	
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	int vitri;
	cout << endl <<"Moi nhap chi so can xoa: ";
	cin >> vitri;
	for (int i = vitri; i < n - 1; i++)
	{
		arr[i] = arr[i+1];		
	}	
	n--;
	cout << "Mang sau khi bi xoa la: " << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
}
