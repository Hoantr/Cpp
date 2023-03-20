#include<iostream>
#include <cstdlib>
#include <time.h>
#include <cstring>
using namespace std;
class Trivia{
	string  cauhoi;
	string dapan1;
	string dapan2;
	string dapan3;
	string dapan4;
	int dung;
	public:
		void setCauhoi(string  cauhoi, string dapan1, string dapan2, string dapan3, string dapan4, int dung){
			this->cauhoi=cauhoi;
			this->dapan1=dapan1;
			this->dapan2=dapan2;
			this->dapan3=dapan3;
			this->dapan4=dapan4;
			this->dung=dung;
		};
		string getCauhoi(){
			return this->cauhoi=cauhoi;
		};
		string getDapan1(){
			return this->cauhoi=dapan1;
		};
		string getDapan2(){
			return this->dapan2=dapan2;
		};
		string getDapan3(){
			return this->dapan3=dapan3;
		};
		string getDapan4(){
			return this->dapan4=dapan4;
		};
		int getDung(){
			return this->dung=dung;
		};
};

int main(){
	int sl;
	cout<<"Nhap so luong cau hoi : "<<endl;
	cin>>sl;
	Trivia ch[sl];
	string cauhoi;
	string dapan1;
	string dapan2;
	string dapan3;
	string dapan4;
	int dung;
	int player1=0,player2=0;
	Trivia tv[sl];
	for (int i = 0; i < sl; ++i)
		{
			cout<<"Nhap cau hoi : "<<endl;
			cin>>cauhoi;
			cout<<"Nhap dap an 1 : "<<endl;
			cin>>dapan1;
			cout<<"Nhap dap an 2 : "<<endl;
			cin>>dapan2;
			cout<<"Nhap dap an 3 : "<<endl;
			cin>>dapan3;
			cout<<"Nhap dap an 4 : "<<endl;
			cin>>dapan4;
			cout<<"Nhap dap an dung : "<<endl;
			cin>>dung;
			tv[i].setCauhoi(cauhoi,dapan1,dapan2,dapan3,dapan4,dung);
		}
	cout<<"Den luot nguoi choi 1: "<<endl;
	for (int j = 0; j < sl/2; ++j)
		{
			int d;
			cout<<"Cau hoi: "<<tv[j].getCauhoi()<<endl;
			cout<<"Dap an 1: "<<tv[j].getDapan1()<<endl;
			cout<<"Dap an 2: "<<tv[j].getDapan2()<<endl;
			cout<<"Dap an 3: "<<tv[j].getDapan3()<<endl;
			cout<<"Dap an 4: "<<tv[j].getDapan4()<<endl;
			cout<<"chon dap an dung (theo so): "<<endl;
			cin>>d;
			if(d==tv[j].getDung()){
				player1++;
			}
		}	
	cout<<"Den luot nguoi choi 2: "<<endl;
	for (int j = sl/2; j < sl; ++j)
		{
			int d;
			cout<<"Cau hoi: "<<tv[j].getCauhoi()<<endl;
			cout<<"Dap an 1: "<<tv[j].getDapan1()<<endl;
			cout<<"Dap an 2: "<<tv[j].getDapan2()<<endl;
			cout<<"Dap an 3: "<<tv[j].getDapan3()<<endl;
			cout<<"Dap an 4: "<<tv[j].getDapan4()<<endl;
			cout<<"chon dap an dung (theo so): "<<endl;
			cin>>d;
			if(d==tv[j].getDung()){
				player2++;
			}
		}
		cout<<"So diem nguoi choi 1: "<<player1<<" So diem nguoi choi 2: "<<player2<<endl;
		if (player1>player2)
		{
			cout<<"player1 win";
		}else{
			if (player1<player2)
			{
				cout<<"player2 win";
			}else cout<<"ket qua hoa";
		}
}