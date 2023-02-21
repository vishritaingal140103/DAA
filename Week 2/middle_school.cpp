#include<iostream>
using namespace std;
int gcdMiddleSchool(int m, int n)
{
	int a[100],b[100],i,j,k=0,l=0;
	for(i=1;i<=m;i++)
	{
		if (m%i==0)
		{
			a[k]=i;
			k++;
			m=m/i;
			i=1;	
		}
	}

	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			b[l]=i;
			l++;
			n=n/i;
			i=1;
		
		}
	}
	int mul=1;
	for (i=0,j=0;(i<k&&j<l);)
	{
		if (a[i]==b[j])
		{
			mul=mul*a[i];
			i++;
			j++;
		}
		else if(k>l)
			i++;
		else
			j++;
	
	}
	return mul;	
}
int main()
{
	int m,n;
	cout<<"Enter m: ";
	cin>>m;
	cout<<"Enter n: ";
	cin>>n;
	if (m>0 && n>0)
		cout<<"GCD of given numbers is: "<<gcdMiddleSchool(m,n);
	else
		cout<<"Invalid numbers!"<<endl;
	return 0;
}
