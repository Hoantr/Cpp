#include<iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;
class Temperature{
	int temp;
	public:
	Temperature(){
		this->temp = 0;
	};
	bool isEthylFreezing(int temp){
		if(temp <= -173)
			return true;
		else return false;
	};
	bool isEthylBoiling(int temp){
		if(temp >= 172)
			return true;
		else return false;
	};
	bool isOxygenFreezing(int temp){
		if(temp <= -362)
			return true;
		else return false;
	};
	bool isOxygenBoiling(int temp){
		if(temp >= -306)
			return true;
		else return false;
	};
	bool isWaterFreezing(int temp){
		if(temp <= 32)
			return true;
		else return false;
	};
	bool isWaterBoiling(int temp){
		if(temp >= 212)
			return true;
		else return false;
	};
};
int main(){
	int temp;
	bool ktr;
	cout<<"nhap nhiet do: "<<endl;
	cin>>temp;
	Temperature tp1;
	ktr=tp1.isEthylFreezing(temp);
	if (ktr == true)
	{
		cout<<"ruou etylic dong bang o nhiet do nay"<<endl;
	}else {
		ktr=tp1.isEthylBoiling(temp);
		if(ktr == true)
			cout<<"ruou etylic soi o nhiet do nay"<<endl;
	}
	ktr=tp1.isOxygenFreezing(temp);
	if (ktr == true)
	{
		cout<<"oxi dong bang o nhiet do nay"<<endl;
	}else {
		ktr=tp1.isOxygenBoiling(temp);
		if(ktr == true)
			cout<<"oxi soi o nhiet do nay"<<endl;
	}
	ktr=tp1.isWaterFreezing(temp);
	if (ktr == true)
	{
		cout<<"nuoc dong bang o nhiet do nay"<<endl;
	}else {
		ktr=tp1.isWaterBoiling(temp);
		if(ktr == true)
			cout<<"nuoc soi o nhiet do nay"<<endl;
	}
	return 0;
}