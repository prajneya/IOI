#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n, x, c;
	cin >> n >> c;
	int a[100][100];
	for(int i=0; i<2; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
		}
	}
	
	vector<int> weight;
	copy(a[1], a[1]+n, weight.begin());
	
	
	
}
