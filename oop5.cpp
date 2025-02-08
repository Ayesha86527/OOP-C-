#include <iostream>
#include <string>
using namespace std;

class Employee{
	int id;
	int salary;
	public:
		void setid(void){
			salary=122;
			cout<<"Enter id of employee: "<<endl;
			cin>>id;
			
		}
		void getid(void){
			cout<<"The id of this employee is "<<id<<endl;
		}
};

int main(){
	/*Employee e1,e2,e3;
	e1.setid();
	e1.getid();*/
	
	Employee fb[3];
	for (int i=0;i<3;i++){
		fb[i].setid();
		fb[i].getid();
	}
	
	return 0;
}
