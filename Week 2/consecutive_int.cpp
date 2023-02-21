# include <iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter m: ";
	cin>>m;
	cout<<"Enter n: ";
	cin>>n;
	int t,gcd;
	if(m==0)
		gcd=n;
	else if(n==0)
		gcd=m;
	else
	{
		if(m<n)
			t=m;
		else
			t=n;
		while(t>0)
		{
			if(m%t==0)
			{
				if(n%t==0)
				{
					gcd=t;
					break;
				}
				else
					t--;
			}
			else
				t--;
		}
	}	
	cout<<"GCD of given numbers is: "<<gcd;
	return 0;
}
