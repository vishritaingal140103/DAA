#include <iostream>
using namespace std;

int main()
{
	int v,e,i,j;
	cout<<"Enter no. of vertices: ";
	cin>>v;
	cout<<"Enter no. of edges: ";
	cin>>e;
	int am[v][v];
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
			am[i][j]=0;
	}
	while(e!=0)
	{
		int a,b;
		cout<<"Enter a: ";
		cin>>a;
		cout<<"Enter b: ";
		cin>>b;
		if(a!=b)
		{
			am[a-1][b-1]=1;
			am[b-1][a-1]=1;
			e--;
		}
		else
		{
			cout<<"Invalid";
		}
	}
	for(i=0;i<v;i++)
	{
		for(j=0;j<v;j++)
		{
			cout<<am[i][j]<<'\t';
		}
		cout<<'\n';
	}	
	return 0;
}
