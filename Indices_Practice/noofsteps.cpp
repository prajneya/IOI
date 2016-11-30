#include<iostream>
using namespace std;

long long a[100];

long long countway(int n){
	
	if(n==1){
		return 1;
	}
	if(n==2){
		return 3;
	}
	if(n==3){
		return 4;
	}
	if(a[n]!=0){
		return a[n];
	}
	a[n]=countway(n-1)+countway(n-2)+countway(n-3);
	return a[n];
}

int main(){
	int n;
	cin >> n;
	cout << countway(n) << endl;
}
