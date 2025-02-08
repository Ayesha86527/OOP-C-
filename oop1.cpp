#include <iostream>
#include <string>
using namespace std;

class Student{
	private:
		int a,b,c;
	public:
		int d,e;
		void setData(int a,int b,int c);   //declaration
		void getData(){
			cout<<a<<endl;
			cout<<b<<endl;
			cout<<c<<endl;
			cout<<d<<endl;
			cout<<e<<endl;
		}
};

void Student :: setData(int a1,int b1,int c1){
	a=a1;
	b=b1;
	c=c1;
}

int main(){
	Student s1;
	//s1.a=1  this will throw an error
	s1.d=9;
	s1.e=8;
	s1.setData(1,3,6);
	s1.getData();
	return 0;
}
