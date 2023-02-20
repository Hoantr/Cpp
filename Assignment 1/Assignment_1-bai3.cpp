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
	for(int j=0;j<n;j++){
		for(int k=j+1;k<n;k++){
			if(a[j]>=a[k]){
				tg=a[j];
				a[j]=a[k];
				a[k]=tg;
			}
		}
	}
	if(n%2==0){
			trungvi=(a[n/2-1]+a[n/2])/2;	
	}else{
		trungvi=a[n/2];
	}
	
	cout<<"so trung vi la: "<<trungvi;
	return 0;
}
