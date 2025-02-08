#include <iostream>
#include <string>
using namespace std;

class binary{
		string s;
		public:
			void read(void);
			void chk_bin(void);
			void ones(void);
			void display(void);
	};
	
void binary :: read(void){
	cout<<"Enter a binary number: "<<endl;
	cin>>s;
}

void binary :: chk_bin(void){
	for (int i=0;i<s.length();i++){
		if (s.at(i)!='0' && s.at(i)!='1'){
			cout<<"Incorrect binary format!"<<endl;
			exit(0);
			
		}
	}
}

void binary :: ones(void){
	chk_bin();    //nesting member function, can use this efficiently if the func is private
	for (int i=0;i<s.length();i++){
		if (s.at(i)=='1'){
			s.at(i)='0';
		}
		else if (s.at(i)=='0'){
			s.at(i)='1';
		}
	}
	
}

void binary :: display(void){
	for (int i=0;i<s.length();i++){
		cout<<s.at(i);
	}
}

int main(){
	/*class Employee{
		harry,rohan,lavish;   // this is valid
	};*/
	
	//NESTING MEMBER FUNCTION
	binary b;
	b.read();
	b.chk_bin();
	b.ones();
	b.display();
	return 0;
}
