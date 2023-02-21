#include <iostream>
using namespace std;
int main()
{
	int arr[10],n,min,temp;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	cout<<"Unsorted array:\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<'\t';
	for(int i=0;i<n-1;i++)
	{
		min=i;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
				min=j;
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	cout<<"\nSorted array:\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<'\t';	
	return 0;
}
