#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int ans[100];

bool checkpalin(int *p, int n){
	int count=0;
	for(int i=0, j=n-1; i<n, j>=0; i++, j--){
		if(p[i]==p[j]){
			count++;
		}
	}
	if(count==n){
		return true;
	}
	else{
		return false;
	}
}

int spalin(int *p, int n){
	ans[n] = 0;
	ans[n-1] = 1;
	vector<int> jstore;
	for(int i=0; i<=n-1; i++){
		for(int j=i; j<n; j++){
			if(checkpalin(p+i, j)){
				ans[j] = spalin(p+i, j);
				jstore.push_back(ans[j]);
			}
			ans[i] = *min_element(jstore.begin(), jstore.end())+1;
		}
	}
	return ans[0];
}

int main(){
	int n;
	cin >> n;
	int a[100];
	for(int i=0; i<n; i++){
		cin >> a[i];
	}
	cout << spalin(a, n);
}
