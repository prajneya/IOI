#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	
	while(k--){
		vector<int> a, vsort, ans;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			a.push_back(x);
		}
		int count=0, ii;
		for(int i=n-1; i>=0; i++){
			if(a[i]>a[i-1]){
				swap(a[i], a[i-1]);
				break;
			}
			else{
				count++;
				ii = i-2;
				a[ii]+=1;
				break;
			}
		}
		if(count!=0){
			for(int i=1; i<=n; i++){
				if(i!=a[ii]){
					vsort.push_back(i);
				}
			}
			for(int i=0; i<=ii; i++){
				ans.push_back(a[i]);
			}
			for(int i=0; i<vsort.size(); i++){
				ans.push_back(vsort[i]);
			}
			for(int i=0; i<n; i++){
				cout << ans[i] << " ";
			}
			cout << endl;
			continue;
		}
		
		for(int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
