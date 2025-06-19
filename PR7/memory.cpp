#include<iostream>
#include<vector>
using namespace std;

template <class T>
class MemoryStudent{
	public:
		
	    int id;
   		string name;
   		
   		 MemoryStudent(int i, string n){
   			id =i;
   			name=n;
		}
		void display(){
			 cout << "ID: " << id << ", Name: " << name << endl;
		}

};

int main(){
	
	vector<MemoryStudent<int>> students;
	int id;
    string name;
	int choice,i;
	while(choice!=5){
		
		cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Remove Student by ID\n";
        cout << "4. Search Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
      
        
        switch (choice){
        	
        	case 1:
        		 	 cout << "Enter ID: ";
                	 cin >> id;
               		 cout << "Enter Name: ";
               		 cin >> name;
               		 
               		  students.push_back(MemoryStudent<int>(id, name));
              		  break;
			
			case 2:
        		 	
               		    for (int i = 0; i < students.size(); i++) {
                 			   students[i].display();
             		 	  }
                		break;
			
			case 3:
   						 cout << "Enter Id : ";
    						cin >> id;

   							 for (int i = 0; i < students.size(); i++) {
       						 if (students[i].id == id) {
           					 students.erase(students.begin() + i);
           						 cout << "Student removed.\n";
           					 break;
        			}
   				 }
   				 break;
    			

			case 4:
					 cout<<"Enter Id : ";
					 cin>>id;
					 for(int i=0 ; i<students.size();i++){
					 	if(students[i].id ==id){
					 		   students[i].display();
					 		   break;
						 }
						
					}
					
		    case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";	 
		 }
	}
	
	
	
	return 0;
	
}