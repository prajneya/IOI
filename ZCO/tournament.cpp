#include<iostream>
#include<vector>
#include<algorithm>
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
	
	sort(a.begin(), a.end());
	
	int sum = 0, diff = 0;
	int j=0;
	for(int i=n-1; i>=0; i--){
		
		sum+=i*a[i];
		
		diff+=i*a[j];
		j++;
	}
	
	cout << sum-diff << endl;
}
