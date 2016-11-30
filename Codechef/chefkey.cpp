#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int m, n, c, count=0;
		vector<int> cf, cfm;
		cin >> m >> n >> c;
		for(int i=1; i<=c; i++){
			if(c%i==0){
				cf.push_back(i);
			}
		}
		for(int i=0; i<cf.size(); i++){
			int j = c/cf[i];
			cfm.push_back(j);
		}
		for(int i=0; i<cf.size(); i++){
			if(cf[i]<=m && cfm[i]<=n){
				count++;
			}
		}
		cout << count << endl;
	}
}
