#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a, count, ans;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	for(int i=0; i<n; i++){
		int d = n-i;
		count.push_back(d);
	}
	for(int i=0; i<n; i++){
		int f = a[i]*count[i];
		ans.push_back(f);
	}
	cout << *max_element(ans.begin(), ans.end()) << endl;
}
