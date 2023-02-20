#include <iostream>
#include <math.h>
using namespace std;
int sapxep(int n);
int main(){
	int n;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	sapxep(n);
	return 0;
}
int sapxep(int n){
	float a[n],tg,tb=0;
	cout<<"nhap cac phan tu trong mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0;j<n;j++){
		for(int k=j+1;k<n;k++){
			if(a[j]>=a[k]){
				tg=a[j];
				a[j]=a[k];
				a[k]=tg;
			}
		}
	}
	for(int i=0;i<n;i++){
		tb=tb+a[i];
	}
	cout<<"diem trung binh la: "<<tb/n;
	return 0;
}
