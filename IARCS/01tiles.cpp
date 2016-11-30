#include<iostream>
using namespace std;

int ncr(int n, int r){
	int num = 1, den = 1;
	for(int i=n; i>=(n-r)+1; i--){
		num = num * i;
	}
	for(int i=1; i<=r; i++){
		den = den * i;
	}
	return num/den;
}

int main(){
	int n;
	cin >> n;
	n--;
	int sum = 0;
	for(int i=n; i>=1; i-=2){
		sum = sum + ncr(n, i);
	}
	cout << sum+1;
}
