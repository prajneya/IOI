#include<iostream>
using namespace std;

int a[100][100];

int countways(int r, int c){
	if(r==1 || c==1){
		return 1;
	}
	if(a[r][c]!=0){
		return a[r][c];
	}
	a[r][c]=countways(r, c-1)+countways(r-1, c);
	return a[r][c];
}

int main(){
	int r, c;
	cout << "Enter number of rows: ";
	cin >> r;
	cout << "Enter number of columns: ";
	cin >> c;
	cout << countways(r, c);
}
