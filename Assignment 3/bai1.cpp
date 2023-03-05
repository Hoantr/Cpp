#include<iostream>
#include<string.h>
using namespace std;
void hoanvi(int* a,int* b);
int main(int argc, char const *argv[])
{
	int a,b;
	cout<<"Input the value of 1st element : ";
	cin>>a;
	cout<<"Input the value of 2nd element : ";
	cin>>b;
	cout<<"The value before swapping are :\n";
	cout<<"element 1 : "<<a<<"\n";
	cout<<"element 2 : "<<b<<"\n";
	hoanvi(&a,&b);
	cout<<"The value after swapping are :\n";
	cout<<"element 1 : "<<a<<"\n";
	cout<<"element 2 : "<<b<<"\n";

	return 0;
}
void hoanvi(int* a,int* b){
	int tg;
	tg=*a;
	*a=*b;
	*b=tg;
}
