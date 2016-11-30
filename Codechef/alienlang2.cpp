#include<iostream>
#include<string>
using namespace std;

int main(){
	int l, d, n;
	cin >> l >> d >> n;
	string words[5100], s[600];
	for(int i=0; i<d; i++){
		cin >> words[i];
	}
	for(int i=0; i<n; i++){
		cin >> s[i];
		
		for(int j=0; j<d; j++){
			if(s[i]==words[j]){
				cout << "Case #" << i << ": " << 1;
				continue;
			}
		}
		int a = s[i].length();
		for(int j=0; j<a; j++){
			
		}
	}
	
}
