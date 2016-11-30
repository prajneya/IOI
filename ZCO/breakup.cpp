#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int q, *o;
int a[100][100];

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
	
	int add = *p-*o;
	
	if(checkpalin(p, n)){
		return 1;
	}
	else{
		int d, e, f, g, h, k, l, m, r, s;
		if(a[add][n-1]!=0){
			d = a[add][n-1];
		}
		else{
			a[add][n-1] = spalin(p, n-1);
			d = a[add][n-1];
		}
		if(a[(add+n)-1][(q-n)+1]!=0){
			e = a[(add+n)-1][(q-n)+1];
		}
		else{
			a[(add+n)-1][(q-n)+1] = spalin((p+n)-1, (q-n)-1);
			e = a[(add+n)-1][(q-n)+1];
		}
		if(a[add+1][n]!=0){
			f = a[add+1][n];
		}
		else{
			a[add+1][n] = spalin(p+1, n);
			f = a[add+1][n];
		}
		if(a[add+1][(q-n)+1]!=0){
			g = a[add+1][(q-n)+1];
		}
		else{
			a[add+1][(q-n)+1] = spalin(p+1, (q-n)+1);
			g = a[add+1][(q-n)+1];
		}
		if(a[add+1][n-1]!=0){
			h = a[add+1][n-1];
		}
		else{
			a[add+1][n-1] = spalin(p+1, n-1);
			h = a[add+1][n-1];
		}
		k = d+e;
		l= f+g;
		m = h+2;
		r = d+1;
		s = f+1;
		return min(min(min(k, l), min(m, r)), s);
	}
}

int  main(){
	int n;
	cin >> n;
	int p[1000];
	for(int i=0; i<n; i++){
		cin >> p[i];
	}
	o = p;
	q = n;
	cout << spalin(p, n);
}
