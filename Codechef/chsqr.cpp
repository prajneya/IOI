#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[500][500];
	a[0][n-1]=1;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(a[i][j]!=1){
				a[i][j]=2;
			}
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
