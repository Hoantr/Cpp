#include<iostream>
using namespace std;
class RetailItem{
	string description;
	int unitsOnHand;
	double price;
	public:
	RetailItem(string description, int unitsOnHand, double price){
		this->description = description;
		this->unitsOnHand = unitsOnHand;
		this->price = price;
	};

	string getDescription(){
		return this->description;
	};
	int getUnitsOnHand(){
		return this->unitsOnHand;
	};
	double getPrice(){
		return this->price;
	};
};
int main(){
	RetailItem rt1("Jacket",12,59.95);
	RetailItem rt2("Designer Jeans",40,34.95);
	RetailItem rt3("Shirt",20,24.95);
	cout<<"|           | Description | Units On Hand |   Price   |"<<endl;
	cout<<"|"<<"Item #1"<<" | "<<rt1.getDescription()<<" | "<<rt1.getUnitsOnHand()<<" | "<<rt1.getPrice()<<" | "<<endl;
	cout<<"|"<<"Item #2"<<" | "<<rt2.getDescription()<<" | "<<rt2.getUnitsOnHand()<<" | "<<rt2.getPrice()<<" | "<<endl;
	cout<<"|"<<"Item #3"<<" | "<<rt3.getDescription()<<" | "<<rt3.getUnitsOnHand()<<" | "<<rt3.getPrice()<<" | "<<endl;
	return 0;
}