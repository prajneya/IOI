#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		vector<int> a, b, c, d, e, f, ans;
		for(int i=0; i<3; i++){
			int x;
			cin >> x;
			a.push_back(x);
			
		}
		for(int i=0; i<3; i++){
			int x;
			cin >> x;
			b.push_back(x);
		}
		for(int i=0; i<3; i++){
			int x;
			cin >> x;
			c.push_back(x);
		}
		d.push_back(a[0]);
		d.push_back(b[0]);
		d.push_back(c[0]);
		
		e.push_back(a[1]);
		e.push_back(b[1]);
		e.push_back(c[1]);
		
		f.push_back(a[2]);
		f.push_back(b[2]);
		f.push_back(c[2]);
		
		int m=0, o=0, p=0, g=0, y=0, r=0;
		
		for(int i=0; i<3; i++){
			m = m+a[i];
		}
		for(int i=0; i<3; i++){
			o = o+b[i];
		}
		for(int i=0; i<3; i++){
			p = p+c[i];
		}
		
		for(int i=0; i<3; i++){
			g = g+d[i];
		}
		for(int i=0; i<3; i++){
			y = y+e[i];
		}
		for(int i=0; i<3; i++){
			r = r+f[i];
		}
		
		ans.push_back(m);
		ans.push_back(o);
		ans.push_back(p);
		ans.push_back(g);
		ans.push_back(y);
		ans.push_back(r);
		
		for(int i=0; i<ans.size(); i++){
			if(ans[i]%2==0){
				ans[i]=ans[i]-1;
			}
		}
		int nob;

			nob = *max_element(ans.begin(), ans.end());

		
		cout << nob << endl;
		a.clear();
		b.clear();
		c.clear();
		d.clear();
		e.clear();
		f.clear();
		ans.clear();
		nob=0;
		
		for(int i=0; i<a.size(); i++){
			cout << endl << a[i] << " " << endl;
		}
		
	}
}
