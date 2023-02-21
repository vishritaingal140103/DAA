#include <iostream>
using namespace std;
struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

void insert(struct node* &head,int d)
{
	struct node *temp= new struct node;
	temp->data=d;
	temp->next=0;
	if(head==0)
	{
		head=temp;
		temp->prev=0;
	}
	else
	{
		struct node *trav= head;
		while(trav->next!=0)
		{
			trav= trav->next;
		}
		trav->next=temp;
		temp->prev=trav;
	}
}

void display(struct node* &head)
{
	struct node *trav= head;
	while(trav!=0)
	{
		cout<< trav->data<<" ";
		trav= trav->next;
	}
	cout<<endl;
}

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
		struct node *head=0;
		insert(head,i+1);
		for(j=0;j<v;j++)
		{
			if(am[i][j]==1)
				insert(head,j+1);
		}
		display(head);
		head=0;
	}
	return 0;
}
