#include <iostream>
using namespace std;

//Forward declaration
class Complex;

class Calculator{
	public:
		int add(int a,int b){
			return a+b;
		}
		
		int sumReal(Complex,Complex);
};

class Complex{
	int a,b;
	friend int Calculator :: sumReal(Complex o1,Complex o2);
	//if we want to make all the functions of class calculator to be friend then
	//friend class Calculator;
	public:
		void setNumber(int n1,int n2){
			a=n1;
			b=n2;
		}
		void printNumber(){
			cout<<"Your number is: "<<a<<" + "<<b<<" i "<<endl;
		}
};

int Calculator :: sumReal(Complex o1,Complex o2){
	return (o1.a,o2.a);
}


int main(){
	Complex o1,o2;
	o1.setNumber(1,4);
	o2.setNumber(5,7);
	Calculator c1;
	int res=c1.sumReal(o1,o2);
	cout<<"The sum of real part of o1 and o2 is "<<res<<endl;
	return 0;
}
