#include <iostream>
#include <string>
using namespace std;

class Employee{
	int id;
	static int count;  //STATIC VAR
	public:
		void setData(void){
			cout<<"Enter the id: "<<endl;
			cin>>id;
			count++;
		}
		void getData(void){
			cout<<"The id of this employee is "<<id<<" and this is employee number "<<count<<endl;
		}
		static void getCount(void){     //STATIC FUNC
		//cout<<id; throws an error
			cout<<"The value of count is "<<count<<endl;
		}
};

int Employee :: count;

int main(){
	Employee harry,shony,lara;
	harry.setData();
	harry.getData();
	Employee :: getCount();
	shony.setData();
	shony.getData();
	Employee :: getCount();
	lara.setData();
	lara.getData();
	Employee :: getCount();
	return 0;
	
}
