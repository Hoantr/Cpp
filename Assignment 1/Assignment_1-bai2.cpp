#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,dt;
	cout<<"nhap cac so lan luot la a b c ";
	cin>>a>>b>>c;
	dt=b*b-4*a*c;
	if(dt<0)
	{
		cout<<"vo nghiem";
	}else if(dt==0){
		cout<<"co nghiem kep la:"<<(-b)/(2*a);
	}else{
		cout<<"co nghiem 2 nghiem la: x1="<<(-b+sqrt(dt))/(2*a)<<"\n"<<"x2="<<(-b-sqrt(dt))/(2*a)<<endl;
	}
	return 0;
}
