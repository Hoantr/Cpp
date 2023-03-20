#include<iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;
class Coin{
	string  sideUp;
	public:
	Coin(){
		this->sideUp = "heads";
	};
	void tossing(){
		int random = rand() % 2;
		    if (random == 0) {
		        this->sideUp = "heads";
		    } else {
		        this->sideUp = "tails";
		    }
	};
	string getSideUp(){
		return this->sideUp;
	};
};
int main(){
	srand(time(0));
	int dem=0;
	Coin();
	Coin cn1;
	for (int i = 0; i < 20; ++i)
	{
		cn1.tossing();
		cout<<cn1.getSideUp()<<endl;
		if("heads" == cn1.getSideUp()){
			dem++;
		}
	}
	cout<<"sum = "<<dem<<endl;
	return 0;
}