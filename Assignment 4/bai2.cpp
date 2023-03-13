#include<iostream>
using namespace std;
class Car{
	int yearModel;
	string make;
	int speed;
	public:
	Car(int yearModel,string make){
		this->yearModel = yearModel;
		this->make = make;
		this->speed = 0;		 
	};
	int getYearModel(){
		return this->yearModel;
	};
	string getMake(){
		return this->make;
	};
	int getSpeed(){
		return this->speed;
	};
	int accelerate(){
		return this->speed+=5;
	};
	int brake(){
		return this->speed-=5;
	};
};
int main(){
	Car car(2023,"Mercedes");
	cout<<"Car | yearModel : "<<car.getYearModel()<<"| make: "<<car.getMake()<<"| speed : "<<car.getSpeed()<<endl;
	cout<<"accelerate"<<endl;
	for (int i = 0; i <5; ++i)
	{
		cout<<"speed : "<<car.accelerate()<<endl;
	}
	cout<<"---------------------"<<endl;
	cout<<"brake"<<endl;
	for (int i = 0; i <5; ++i)
	{
		cout<<"speed: "<<car.brake()<<endl;
	}
	return 0;
}