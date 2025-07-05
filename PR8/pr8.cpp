#include<iostream>
using namespace std;

class Node {
		public: 
		int data;
		Node*next;
		
		Node(int value){
			data=value;
			next=NULL;
		}
};

int main(){
	int n,value,t,temp;
	Node* head = NULL;
    Node* tail = NULL;
	cout<<"---Create Link List ---"<<endl;
	cout<<"Enter Your List Size :- ";
	cin>>n;
	for(int i=0;i<n;i++){
		
		cout<<"Enter Your Node : ";
		cin>>value;
		
		Node*newNode= new Node(value);
		
		if(head==NULL){
			head=newNode;
			tail=newNode;
		}
		else{
			tail->next=newNode;
			tail=newNode;
		}
	}
	  cout << "\nYour Linked List: ";
	  Node*newNode=head;
	  while(newNode!=NULL){
	  	cout<<newNode->data<<" ";
	  	newNode=newNode->next;
	  }
	  
	  cout<<"\n----Insert Linklist Data----"<<endl;
	  
	  cout<<"How Many Insert Value : ";
	  cin>>n;
	  
	  
    for (int i = 0; i < n; i++) {
        cout << "Enter your Value: ";
        cin >> value;

        Node* t = new Node(value);
        t->next = head;
        head = t;
        
        cout << "Updated List: ";
    
        while (t != NULL) {
            cout << t->data << " ";
            t = t->next;
        }
        cout << "NULL\n";
    }
	
	  cout<<"\n----Search  Linklist Data----"<<endl;
	  
	  cout<<" Search Data : ";
	  cin>>value;
	  int pos=1;
	  Node*s=head;
	  while(s!=NULL){
	  	
	  	if(value == s->data){
	  		cout << "Value found at position: " << pos << endl;
	  		break;
		  }
	  	  s = s->next;
   		 pos++;
	  }
	cout<<"\n----Deletion Of a Node----"<<endl;
	
	cout<<" Delete Data : ";
	cin>>value;
	
	Node*d=head;
	Node* pre=NULL;
	while(d!=NULL){
	  	
	  	if(value == d->data){
	  		if(pre==NULL){
	  			head=d->next;
			  }
			  else{
			  	pre->next=d->next;
			  }
			  delete d;
	  		break;
		  }
		  pre=d;
	  	  d = d->next;
   	
	  }
	cout << "\nYour Final Linked List: ";
	d = head;
	while (d != NULL) {
    cout << d->data << " ";
    d = d->next;
	}	
	
	cout<<"\n----Reverse Of a Linked List----"<<endl;
	
		Node* prev = NULL;
		Node* curr = head;
		Node* next = NULL;
		
		while (curr != NULL) {
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	
	head = prev;
	
	cout << "Reversed Linked List: ";
	Node* rev = head;
	while (rev != NULL) {
	cout << rev->data << " ";
	rev = rev->next;
	}

	
	
	return 0;
}
	