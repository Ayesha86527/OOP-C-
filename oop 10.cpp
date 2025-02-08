#include <iostream>
using namespace std;

class c2;

class c1{
	int val;
	public:
		void indata(int a){
			val=a;
		}
		
		void display(void){
			cout<<val<<endl;
		}
		
		friend void swap(c1 &,c2 &);
};

class c2{
	int val2;
	public:
		void indata(int a){
			val2=a;
		}
		void display(void){
			cout<<val2<<endl;
		}
		friend void swap(c1 &,c2 &);
};

void swap(c1 &n1,c2 &n2){
	int temp=n1.val;
	n1.val=n2.val2;
	n2.val2=temp;
}

int main(){
	c1 n1;
	c2 n2;
	n1.indata(10);
	n2.indata(20);
	swap(n1,n2);
	cout<<"The value of c1 after exchanging becomes:";
	n1.display();
	cout<<"The value of c2 after exchanging becomes:";
	n2.display();
	return 0;
}
