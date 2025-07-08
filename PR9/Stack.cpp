#include<iostream>
using namespace std;

class Stack{
	
	private:
		int *arr;
		int top;
		int capacity;
		
	public:
		 Stack(int size) {
		capacity = size;
		arr = new int[capacity];
		top = -1;
		}
		
	bool Full(){
			return top == capacity - 1;
	}
	bool empty() {
		return top == -1;
	}
	bool EMPTY() {
		
		if (empty()) {
				cout << "? Stack is empty." << endl;
			} else {
				cout << "? Stack is not empty." << endl;
			}	
	}
	bool FULL() {
		
		if (Full()) {
				cout << "? Stack is full." << endl;
			} else {
				cout << "? Stack is not full." << endl;
			}	
	}		
	void push(int value){
		if (Full()) {
		cout << "Stack Overflow! Cannot push " << value << endl;
		} 
		else {
		arr[++top] = value;
		cout << value << " pushed to stack." << endl;
		}
					
	}

	
	void pop(){
		if (empty()) {
		cout << "Stack is full delete" <<  endl;
		} 
		else {
            cout << "? " << arr[top] << " popped from stack." << endl;
            top--;
        }
					
	}
	int peek(){
		if (empty()) {
		cout << "Stack is empty. Nothing on top." <<endl;
		} 
		else{
			cout<<"Top : "<<arr[top]<<endl;
		}
	}
	int display(){
		if (empty()) {
		cout << "Stack is full delete" <<endl;
		} 
		else{
			for(int i=0;i<=top;i++){
				cout<<"Element : "<<arr[i]<<endl;
			}
			cout<<endl;
		}
	}

};
		
		
 int main(){
	int choice,value,size;

    cout << "Enter size of stack: ";
    cin >> size;
	cout<<endl;
	
    Stack s(size);
	while(1){
		cout<<"Press 1 Push Element "<<endl;
		cout<<"Press 2 Pop Element "<<endl;
		cout<<"Press 3 Peek Element "<<endl;
		cout<<"Press 4 Display Element "<<endl;
		cout<<"Press 5 Empty Element "<<endl;
		cout<<"Press 6 Full Element "<<endl;
		cout<<"Press 0 Exit "<<endl;
		cout<<"Enter Your Choice : ";
		cin>>choice;
		cout<<endl;
		
		if(choice==0){
			cout<<"------------------Exit--------------------"<<endl;
			break;		
		}    
		
		switch (choice){                                          
			    
			case 1 :
					cout<<"Enter Your Value : ";
					cin>>value;
					s.push(value);
					
			break;
			
			case 2:
					
					s.pop();
					
			break;
			
			case 3:
					value = s.peek();
			break;

			case 4:
					s.display();	
			break;
			
			case 5:
					s.EMPTY();
					
			break;
			case 6:
					s.Full();
			break;
		
 

	}
	
	
	
	
}
return 0;
}