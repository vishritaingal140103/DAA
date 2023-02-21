# include <iostream>
using namespace std;
int main()
{
	int i,j,k,r1,c1,r2,c2;
	cout<<"Enter order of first matrix: ";
	cin>>r1;
	cin>>c1;
	int m1[r1][c1];
	cout<<"Enter elements of first matrix: ";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>m1[i][j];
		}
	}
	cout<<"Enter order of second matrix: ";
	cin>>r2;
	cin>>c2;
	int m2[r2][c2];
	cout<<"Enter elements of second matrix: ";
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			cin>>m2[i][j];
		}
	}
	if(c1!=r2)
	{
		cout<<"Can't multiply";
	}
	else
	{
		int m3[r1][c2];
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				m3[i][j]=0;
				for(k=0;k<c1;k++)
				{
					m3[i][j]+= m1[i][k]*m2[k][j];
				}
			}
		}
		cout<<"Matrix after multiplication:\n";
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				cout<<m3[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	
}
