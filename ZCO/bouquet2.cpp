#include <bits/stdc++.h>
using namespace std;

int main(){
	long long a[100][100];
	int t;
	cin >> t;
	while(t--){
		for(int i=0; i<3; i++){
			for(int j=0; j<3; j++){
				cin >> a[i][j];	
			}
		}
		int m=0, o=0, p=0, g=0, y=0, r=0;
		for(int i=0; i<3; i++){
			m = m + a[0][i];
			o = o + a[1][i];
			p = p + a[2][i];
			g = g + a[i][0];
			y = y + a[i][1];
			r = r + a[i][2];
		}
		
		if(m%2==0 && m>0){
			m=m-1;
		}
		if(o%2==0 && o>0){
			o=o-1;
		}
		if(p%2==0 && p>0){
			p=p-1;
		}
		if(g%2==0 && g>0){
			g=g-1;
		}
		if(y%2==0 && y>0){
			y=y-1;
		}
		if(r%2==0 && r>0){
			r=r-1;
		}
		
		
		
		cout << max(max(max(m, o), max(p, g)), max(y, r)) << endl;
	}
}
