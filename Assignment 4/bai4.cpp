#include<iostream>
using namespace std;
class Inventory{
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
	public:
	Inventory(){
		this->itemNumber = 0;
		this->quantity = 0;
		this->cost = 0;
		this->totalCost = 0;
	};
	Inventory(int itemNumber, int quantity, double cost){
		this->itemNumber = itemNumber;
		this->quantity = quantity;
		this->cost = cost;
		setTotalCost(quantity,cost);
	};
	void setTotalCost(int quantity, double cost){;
		 this->totalCost = quantity*cost;
	};
	void setItemNumber(int itemNumber){
		this->itemNumber=itemNumber;
	};
	void setCost(double cost){
		this->cost=cost;
	};
	void setQuantity(int quantity){
		this->quantity=quantity;
	};
	double getTotalCost(){
		return this->totalCost;
	};
	int getItemNumber(){
		return this->itemNumber;
	};
	double getCost(){
		return this->cost;
	};
	int getQuantity(){
		return this->quantity;
	};
};
int main(){
	Inventory();
	Inventory* rt;
	int lenght=0;
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
	int n=1;
	while(n>0){
		cout<<"Nhap id: ";
		cin>>itemNumber;
		cout<<"Nhap so luong: ";
		cin>>quantity;
		cout<<"Nhap gia: ";
		cin>>cost;
		rt->setItemNumber(itemNumber);
		rt->setQuantity(quantity);
		rt->setCost(cost);
		rt->setTotalCost(quantity,cost);
		++rt;
		lenght++;
		cout<<"Nhap 0 de thoat va in ket qua, nhap 1 de tiep tuc them du lieu";
		cin>>n;
	}
		cout<<"|  ItemNumber | Quantity |   Cost   |  TotalCost  |"<<endl;
		--rt;
	while(lenght>0){
		cout<<"|"<<rt->getItemNumber()<<" | "<<rt->getQuantity()<<" | "<<rt->getCost()<<" | "<<rt->getTotalCost()<<" | "<<endl;
		lenght--;
	}
	return 0;
}