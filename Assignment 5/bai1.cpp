#include<iostream>
using namespace std;
class Circle{
	double radius;
	double pi=3.14159;
	public:
	Circle(){
		this->radius = 0.0;
	};
	Circle(double radius){
		this->radius = radius;
	};
	void setRadius(double radius){
		this->radius = radius;
	}
	double getRadius(){
		return this->radius;
	}
	double getArea(){
		return this->pi*this->radius*this->radius;
	}
	double getDiameter(){
		return this->radius*2;
	}
	double getCircumference(){
		return this->radius*2*this->pi;
	}
};
int main(){
	Circle();
	int r;
	cout<<"Nhap ban kinh hinh tron: "<<endl;
	cin>>r;
	Circle cr1;
	cr1.setRadius(r);
	cout<<"Dien tich : "<<cr1.getArea()<<"\n"<<cr1.getDiameter()<<"\n"<<cr1.getCircumference()<<"\n"<<endl;
	return 0;
}