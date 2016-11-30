#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	//declarations
	ios::sync_with_stdio(false);
	long long n;
	cin >> n;
	vector<long long> a, p, ans, boss, sort;
	
	//inputs
	for(long long i =0; i<n; i++){
		long long x;
		cin >> x;
		a.push_back(x);
	}
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		p.push_back(x);
	}
	
	//program
	for(long long i=0; i<n; i++){
		if(p[i]==-1){
			ans.push_back(a[i]);
			boss.push_back(i);
		}	
	}
	for(long long j=0; j<boss.size(); j++){
		for(long long i=0; i<n; i++){
			if(p[i]==(boss[j]+1)){
				ans.push_back(a[i]);
				boss.push_back(i);
			}
		}
		ans.push_back(0);
	}
	
	for(long long i=0; i<ans.size()-1; i++){
		for(long long j=i+1; j<ans.size(); j++){
			if(find(ans.begin()+i, ans.begin()+j, 0) != ans.end() && ans[i]!=0 && ans[j]!=0){
				long long x;
				x = ans[i]-ans[j];
				sort.push_back(x);
			}
			
		}
	}
	
	//output
	cout << *max_element(sort.begin(), sort.end()) << endl;
	
}
