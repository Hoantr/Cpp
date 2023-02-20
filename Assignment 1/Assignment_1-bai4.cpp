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
	float a[n],tg,trungvi=0;
	cout<<"nhap cac phan tu trong mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int j=0,k=n-1;j<n/2;j++,k--){
			tg=a[j];
			a[j]=a[k];
			a[k]=tg;
	}
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	return 0;
}
