#include<iostream>
using namespace std;
class Employee{
	string name;
	int idNumber;
	string department="";
	string position="";
	public:
	Employee(string name, int idNumber, string department, string position){
		this->name = name;
		this->idNumber = idNumber;
		this->department = department;
		this->position = position; 
	};
	Employee(string name, int idNumber){
		this->name = name;
		this->idNumber= idNumber;	
	};
	Employee(){
		this->name = "";
		this->idNumber = 0;
		this->department = "";
		this->position = "";
	};
	string getName(){
		return this->name;
	};
	int getIdNumber(){
		return this->idNumber;
	};
	string getDepartment(){
		return this->department;
	};
	string getPosition(){
		return this->position;
	};
};
int main(){
	Employee emp1("Susan Meyers",47899,"Accounting","Vice President");
	Employee emp2("Mark Jones",39119,"IT","Progammer");
	Employee emp3("Joy Roers",81774,"Manufacturing","Engineer");
	cout<<"|     Name       | ID Number  |  Department  |   Position    |"<<endl;
	cout<<"|"<<emp1.getName()<<" | "<<emp1.getIdNumber()<<" | "<<emp1.getDepartment()<<" | "<<emp1.getPosition()<<" | "<<endl;
	cout<<"|"<<emp2.getName()<<" | "<<emp2.getIdNumber()<<" | "<<emp2.getDepartment()<<" | "<<emp2.getPosition()<<" | "<<endl;
	cout<<"|"<<emp3.getName()<<" | "<<emp3.getIdNumber()<<" | "<<emp3.getDepartment()<<" | "<<emp3.getPosition()<<" | "<<endl;
	return 0;
}