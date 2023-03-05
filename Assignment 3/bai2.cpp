#include <iostream>
using namespace std;
int tong(int *a,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=*a;
		a++;
	}
	return sum;
}
int main(int argc, char const *argv[])
{
	int n=-1;
	while(n<=0 || n>10){
		cout<<"nhap so luong phan tu mang[max 10]: ";
		cin>>n;
	}
	int a[n];
	cout<<"nhap phan tu mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"tong: "<<tong(a,n);
}