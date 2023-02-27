#include <iostream>
#include <math.h>
#include <stdbool.h>
using namespace std;
bool magicSquare(int arr[][3]);
int main(int argc, char const *argv[])
{
	int arr[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cin>>arr[i][j];
		}
	}
	if(magicSquare(arr)){
	cout<<"This is a magic square!";
}else{
	cout<<"his is NOT a magic square!";
}
	return 0;
}
bool magicSquare(int arr[][3]){
	int sum = 0; 
	for(int i=0;i<3;i++){
		cout<<"\n"; 
		for(int j=0;j<3;j++){
			cout<<arr[i][j];
		}
	}
	cout<<"\n"; 
	
	for(int i=0;i<3;i++){
		int rowSum = 0; 
		for(int j=0;j<3;j++){
			rowSum += arr[i][j]; 
		}
		sum = rowSum;
		for(int j=0;j<3;j++){
			int colSum = 0; 
			for(int k=0;k<3;k++){
				colSum += arr[k][j]; 
			}
			if (colSum != sum){
				return false; 
			}
		}
		int cheochinh = 0; 
		int cheophu = 0; 
		for(int j=0;j<3;j++){
			cheochinh += arr[j][j]; 
			cheophu += arr[j][3 - j - 1]; 
		}
		if(cheochinh != sum || cheophu != sum){
			return false; 
		}else return true; 
	}
}
