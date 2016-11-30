#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long n, k;
	cin >> n >> k;
	vector<long long> a, b;
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		a.push_back(x);
	}
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		b.push_back(x);
	}
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	long long count = 0;
	
	while(k--){
		for(long long i=0; i<n; i++){
			if(a[i]<=b[i]){
				count++;
			}
		}
		long long temp;
		if(count >=n/2 ){
			temp = a[n-1];
			a[n-1] = b[0];
			b[0] = temp;
			
		}
		else{
			temp = b[n-1];
			b[n-1] = a[0];
			a[0] = temp;
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		count = 0;
	}
	long long skew;
	skew = a[n-1]+b[n-1];
	cout << skew << endl;
}
