#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	long long int n, k;
	vector<long long int> a;
	cin >> n >> k;
	for(long long int i=0; i<n; i++){
		long long int x;
		cin >> x;
		a.push_back(x);
	}
	long long int count = 0;
	
	sort(a.begin(), a.end());
	long long int j=1;
	
	for(long long int i=n-1; i>0;){
		if(a[i]-a[i-j]>=k){
			count+=(i-j+1);
			j=1;
			i--;
		
		}
		else{
			j++;
			
		}
		if(j>=n){
			break;
		}
	}
	
	cout << count << endl;
}
