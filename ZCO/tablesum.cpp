#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	
	vector< vector<int> > b;
	for(int i=0; i<n; i++){
		int count = 0;
		int j = i+1;
		vector<int> c;
		for(; count<n;){
			c.push_back(a[i]+j);
			count++;
			j++;
			if(j>n){
				j = j-n;
			}
		}
		b.push_back(c);
	}
	vector<int> ans;
	int max = b[0][0];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(b[j][i]>max){
				max = b[j][i];
			}
		}
		ans.push_back(max);
		max = -1;
	}
	
	for(int i=0; i<ans.size(); i++){
		cout << ans[i] << " ";
	}
}
