# include <iostream>
using namespace std;
int GCD(int m,int n)
{
	if(n==0)
		return m;
	else
	{
		int r;
		r= m%n;
		m=n;
		return GCD(m,r);
	}
		
}
int main()
{
	int a,b;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"GCD of given numbers is: "<< GCD(a,b);
	return 0;
}
