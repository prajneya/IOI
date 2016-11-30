#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	string a, b, c, d;
	int x,s;
	cin >> x;
	while(x > 0){
		s = x % 10;
		v.push_back(s);
		x = x/10;
	}
	
	reverse(v.begin(), v.end());
	
	for(int i = 0; i<v.size(); i++){
		switch(v[i]){
			case 2: a[i] = 'a';
					b[i] = 'b';
					c[i] = "c";
			case 3: a[i] = "d";
					b[i] = "e";
					c[i] = "f";
			case 4: a[i] = "g";
					b[i] = "h";
					c[i] = "i";
			case 5: a[i] = "j";
					b[i] = "k";
					c[i] = "l";
			case 6: a[i] = "m";
					b[i] = "n";
					c[i] = "o";
			case 7: a[i] = "p";
					b[i] = "q";
					c[i] = "r";
					d[i] = "s";
			case 8: a[i] = "t";
					b[i] = "u";
					c[i] = "v";
			case 9: a[i] = "w";
					b[i] = "x";
					c[i] = "y";
					d[i] = "z";
			
		}
	}
}
