#include<iostream>
#include<string>
using namespace std;

int main(){
	int l, d, n;
	cin >> l >> d >> n;
	char a[20][5001], b[501][20];
	for(int i=0; i<d; i++){
		for(int j=0; j<l; j++){
			cin >> a[i][j];
		}
	}
	while(n--){
		int count = l, temp1;
		for(int i=0; i<n; i++){
			for(int j=0; j<count; j++){
				cin >> b[i][j];
				if(b[i][j]=='('){
					count+=2;
					temp1 = j;
				}
				if(b[i][j]==')'){
					count+=(j-temp1)-1;
				}
			}
		}
	}
}
