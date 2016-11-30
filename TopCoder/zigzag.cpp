#include<iostream>
#include<vector>
using namespace std;

int zigzag(vector<int> a, int n){
	if(n==1){
		return 1;
	}
	if(n==2){
		return 2;
	}
	else{
		if(a[n-1]-a[n-2]>0 && a[n-2]-a[n-3]<0){
			return zigzag(a, n-1)+1;
		}
		if(a[n-1]-a[n-2]<0 && a[n-2]-a[n-3]>0){
			return zigzag(a, n-1)+1;
		}
	}
}

int main(){
	int n;
	cin >> n;
	vector<int> a;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	cout << zigzag(a, n) << endl;
}
