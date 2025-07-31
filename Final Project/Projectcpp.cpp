#include<iostream>
using namespace std;

class Node{
	public:
	int data;
	Node*next;
	
	Node(int value){
		data=value;
		next=NULL;
	}
	
};
	
Node* head = NULL;
Node* tail = NULL;
	
void  insertLinkedList(int value){
	Node* newNode = new Node(value);
   	if(head==NULL)
	{
			head=newNode;
			tail=newNode;
	}
	else{	
			tail->next=newNode;
			tail=newNode;
	}
}
void displayLinkedList() {
	Node*temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void MergeSort(){
	
}
int main(){
	
	int choice;
	
	while(true){
		
		cout << "\n===== MENU =====\n";
        cout << "1. Insert into Linked List\n";
        cout << "2. Display Linked List\n";
        cout << "3. Input Array\n";
        cout << "4. Merge Sort Array\n";
        cout << "5. Quick Sort Array\n";
        cout << "6. Binary Search in Array\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        
        switch(choice){
        	
        	case 1:{
        		int val;
                cout << "Enter value to insert: ";
                cin >> val;
                insertLinkedList(val);
                break;
                }
			case 2:
                displayLinkedList();
            break;
			case 3:
                MergeSort();
            break;
        	
		}
		
	}
	
	
}