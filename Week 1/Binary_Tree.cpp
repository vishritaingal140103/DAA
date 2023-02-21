#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* llink;
    Node* rlink;
};
Node* insert(Node* root,int d){
    Node* temp = new Node();
    temp->data = d;
    temp->llink = temp->rlink = NULL;
    if(root==NULL){
        root = temp;
        return root;
    }
    if(d<root->data){
        root->llink = insert(root->llink,d);
    }
    else{
        root->rlink = insert(root->rlink,d);
    }
    return root;

}
Node* searchBST(Node* root,int target){
    if(root==NULL){
        return root;
    }
    if(target<root->data){
        root->llink = searchBST(root->llink,target);
    }
    else if(target>root->data){
        root->rlink = searchBST(root->rlink,target);
    }
    else{
        cout<<"\n"<<endl;
        cout<<"Target Found: "<<target<<endl;
    }
    return root;

}

void inorder(Node* root){
    if(root!=NULL){
        inorder(root->llink);
        cout<<root->data<<" ";
        inorder(root->rlink);
    }
}
void preorder(Node* root){
    if(root!=NULL){
        cout<<root->data<<" ";
        preorder(root->llink);
        preorder(root->rlink);
    }
}
void postorder(Node* root){
    if(root!=NULL){
        postorder(root->llink);
        postorder(root->rlink);
        cout<<root->data<<" ";
    }
}
int main(){
    Node* root = NULL;
    cout<<"Creation of Binary Search Tree"<<endl;
    char ch= 'y';
    while(ch=='y'){
        cout<<"Enter the element you want to insert: ";
        int e;
        cin>>e;
        root = insert(root,e);
        cout<<"Do u want to continue?(y/n)"<<endl;
        cin>>ch;
    }
    ch = 'y';
    while(ch=='y'){
        cout<<"1.Search element\n2.Inorder traversal\n3.Preorder Traversal\n4.Postorder Traversal\n"<<endl;
    	int x;
    	cout<<"Enter your input:";
    	cin>>x;
    	switch (x)
    	{
    	case 1:
    		cout<<"Enter element to be searched: ";
    		int elem;
    		cin>> elem;
    		root = searchBST(root,elem);
    		break;
    	case 2:
        	inorder(root);
        	break;
    	case 3:
        	preorder(root);
        	break;
    	case 4:
        	postorder(root);
        	break;
    	default:
        	break;	
    	}
        cout<<"\nDo u want to continue?(y/n)"<<endl;
    	cin>>ch;
	}
}
