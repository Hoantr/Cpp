#include<iostream>
#include<string.h>
using namespace std;
struct info {
    int songay;
    int giangay;
    int chiphithuoc;
    int phidichvu;
};
int main(int argc, char const *argv[])
{
	int n=3,sum=0;
	struct info noitru;
	struct info ngoaitru;
	while(n){
		cout<<"la benh nhan noi tru vui long nhap 1 \n";
		cout<<"la benh nhan ngoai tru vui long nhap 2 \n";
		cout<<"ket thuc nhap 0 \n";
		cin>>n;
		if(n==1){
			cout<<"nhap so ngay nam vien:\n";
			cin>>noitru.songay;
			if(noitru.songay<0){
				cout<<"nhap lai so ngay nam vien:\n";
				cin>>noitru.songay;	
			}
			cout<<"nhap ty gia ngay:\n";
			cin>>noitru.giangay;
			if(noitru.songay<0){
				cout<<"nhap lai ty gia ngay:\n";
				cin>>noitru.giangay;	
			}
			cout<<"nhap chi phi thuoc:\n";
			cin>>noitru.chiphithuoc;
			if(noitru.chiphithuoc<0){
				cout<<"nhap lai chi phi thuoc:\n";
				cin>>noitru.chiphithuoc;
			}
			cout<<"nhap phi dich vu:\n";
			cin>>noitru.phidichvu;
			if(noitru.phidichvu<0){
				cout<<"nhap lai phi dich vu:\n";
				cin>>noitru.phidichvu;
			}
			sum=noitru.songay*noitru.giangay+noitru.chiphithuoc+noitru.phidichvu;
			cout<<"tong chi phi la: "<<sum<<"\n";
		}else 
			if(n==2){
				cout<<"nhap chi phi thuoc:\n";
			cin>>ngoaitru.chiphithuoc;
			if(ngoaitru.chiphithuoc<0){
				cout<<"nhap lai chi phi thuoc:\n";
				cin>>ngoaitru.chiphithuoc;
			}
			cout<<"nhap phi dich vu:\n";
			cin>>ngoaitru.phidichvu;
			if(ngoaitru.phidichvu<0){
				cout<<"nhap lai phi dich vu:\n";
				cin>>ngoaitru.phidichvu;
			}
				sum=ngoaitru.chiphithuoc+ngoaitru.phidichvu;
				cout<<"tong chi phi la: "<<sum<<"\n";
			}else{
				cout<<"vui long nhap lai \n";
			}
	}
	return 0;
}
