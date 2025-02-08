#include <iostream>
#include <string>
using namespace std;

class Shop{
	int itemid[100];
	int itemprice[100];
	int counter;
	public:
		void initCounter(void){
			counter=0;
		}
		void setPrice(void);
		void displayPrice(void);
};

void Shop :: setPrice(void){
	cout<<"Enter id of your item: "<<counter+1<<endl;
	cin>>itemid[counter];
	cout<<"Enter item price: "<<endl;
	cin>>itemprice[counter];
	counter++;
}

void Shop :: displayPrice(void){
	for (int i=0;i<counter;i++){
		cout<<"The price of item with item id "<<itemid[i]<<" is "<<itemprice[i]<<endl;
	}
}

int main(){
	Shop dukaan;
	dukaan.initCounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.displayPrice();
	return 0;
}
