# include <iostream>
using namespace std;
int main()
{
	char s1[100],s2[100];
	cout<<"Enter string 1: ";
	gets(s1);
	cout<<"Enter string 2: ";
	gets(s2);
	int n=0,m=0,f=0;
	for(int i=0;s1[i]!='\0';i++)
		n++;
	for(int i=0;s2[i]!='\0';i++)
		m++;
	for(int i=0;i<=n-m;i++)
	{
		int j=0;
		while(j<m && s2[j]==s1[i+j])
			j++;
		if(j==m)
		{
			f=1;
			cout<<"String found";
			return i;
		}
	}
	if(f==0)
		cout<<"String not found";
	return 0;
}
