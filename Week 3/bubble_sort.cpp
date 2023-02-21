#include <iostream>
using namespace std;
int main()
{
	int arr[10],n,temp;
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
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"\nSorted array:\n";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<'\t';	
	return 0;
}
