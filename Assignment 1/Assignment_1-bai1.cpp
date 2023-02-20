#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int distance, speed, time;
	cout<<"What is the speed of the vehicle in mph? ";
	cin>>speed;
	cout<<"How many hours has it traveled? ";
	cin>>time;
	cout<<"--------------------------------\n";
	for(int i=1;i<=time;i++)
		{	
			distance=speed*i;
			cout<<i<<"    "<<distance<<endl;
		}
	return 0;
}
