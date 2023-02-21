#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next, *prev;
};

class DoublyLinkedList {
   private:
    Node *head, *tail;

   public:
    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    //1
    void insert_front(int elem) {
        Node *temp = new Node;
        temp->data = elem;
        temp->prev = NULL;
        if (head == NULL) {
            // list is empty
            temp->next = NULL;
            tail = temp;
        } else {
            head->prev = temp;
            temp->next = head;
        }
        head = temp;
    }


    //2
    void insert_before(int elem, int val) {
        Node *temp = new Node;
        Node *trav = new Node;
        temp->data = elem;
        trav = tail;
        bool found = false;
        while (trav != NULL) {
            if (val == trav->data) {
                found = true;
                if (trav->prev != NULL)
                    trav->prev->next = temp;
                else
                    head = temp;
                temp->prev = trav->prev;
                trav->prev = temp;
                temp->next = trav;
                break;
            }
            trav = trav->prev;
        }
        if (!found) {
            cout << "Element not found" << endl;
        }
    }
    
    //3
    void delete_all(int delVal)
    {
    	Node *trav;
    	trav=head;
    	while(trav!=NULL)
    	{
    		if(trav->data==delVal)
    		{
    			if(trav->prev!=NULL)
    			{
    				trav->prev->next=trav->next;
    				if(trav->next!=NULL)
    				{
    					trav->next->prev= trav->prev;
    					trav=trav->next;
					}
					else
					{
						trav->prev->next= NULL;
						trav= NULL;
					}
				}
				else
				{
					if(trav->next!=NULL)
					{
						trav->next->prev= NULL;
						head= trav->next;
						trav= head;
					}
					else
					{
						head=trav=NULL;
					}
				}
			}
			else
			{
				trav= trav->next;
			}
		}
	}
	
	//4
	void search(int val)
	{
		Node *trav;
		trav= head;
		while(trav!=NULL)
		{
			if(trav->data==val)
			{
				cout<<"Value found"<<endl;
			}
			trav= trav->next;
		}
	}
    //5
    void display() {
        Node *trav = new Node;
        trav = head;
        while (trav != NULL) {
            cout << trav->data << " ";
            trav = trav->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    int opt;
    int pos, elem;
    cout << "Enter the Option:" << endl;
    cout << "1.Insert at front" << endl;
    cout << "2.Insert before another element" << endl;
    cout << "3.Delete all" << endl;
    cout<<  "4.Search value"<<endl;
    cout << "5.Print the list" << endl;
    cout << "6.Exit" << endl;

    while (true) {
        cout << ">Enter Option:  ";
        cin >> opt;
        switch (opt) {
            case 1:
                cout << "Enter the element to insert:";
                cin >> elem;
                dll.insert_front(elem);
                break;
            case 2:
                cout << "Enter the element to insert before:";
                cin >> pos;
                cout << "Enter the element to insert:";
                cin >> elem;
                dll.insert_before(elem, pos);
                break;
            case 3:
            	cout<<"Enter element to delete: ";
            	cin>>elem;
            	dll.delete_all(elem);
            	break;
            case 4:
            	cout<<"Enter value to be searched: ";
            	cin>>elem;
            	dll.search(elem);
            	break;
            case 5:
                cout << "Linked List : ";
                dll.display();
                break;
            case 6:
                return 0;
            default:
                cout << "Invalid Choice!" << endl;
        }
    }
}
