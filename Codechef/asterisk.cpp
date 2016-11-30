#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;
	vector<char> f;
	string s;
	int size;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if(s[i]==s[i+1]){
			v.push_back(i);
		}
	
	}
	size = s.length() + v.size();
	
	for(int i=0; i<v.size(); i++){
		for(int j=0; j<v[i]+1; j++){
			f.push_back(s[j]);
		}
	
		f.push_back('*');
	}
	
	for(int i=v[v.size()-1]+1; i<s.length(); i++){
		f.push_back(s[i]);
	}
	
	for(int i=0; i<f.size(); i++){
		cout << f[i];
	}
}
