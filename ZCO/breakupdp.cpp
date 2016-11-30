#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[100][100];

bool checkpalin(vector<int> p, int n){
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

int spalin(vector<int> p, int n){
	if(checkpalin(p, n)){
		return 1;
	}
	else{
		int d, e, f;
		if(a[p[0]][p[n-1]]!=0){
			d = a[p[0]][p[n-1]];
		}
		else{
			a[p[0]][p[n-1]] = spalin(p, n-1)+1;
			d = a[p[0]][p[n-1]];
		}
		
		p.erase(p.begin());
		
		if(a[p[0]][p[n-1]]!=0){
			e = a[p[0]][p[n-1]];
		}
		else{
			a[p[0]][p[n-1]] = spalin(p, n)+1;
			e = a[p[0]][p[n-1]];
		}
		
		if(a[p[0]][p[n-2]]!=0){
			f = a[p[0]][p[n-2]];
		}
		else{
			a[p[0]][p[n-2]] = spalin(p, n-1)+2;
			f = a[p[0]][p[n-2]];
		}
		
		return min(min(d, e), f);
	}
}

int  main(){
	int n;
	cin >> n;
	vector<int> p;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		p.push_back(x);
	}
	cout << spalin(p, n);
}
