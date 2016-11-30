#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long work[100];

long long minsub(vector<long long> random, long long n){
	if(n==1){
		return random[0];
	}
	if(n==2){
		return min(random[0], random[1]);
	}
	if(n==3){
		return *min_element(random.begin(), random.end());
	}
	else{
		if(min(min(random[n-4], random[n-3]), random[n-2])==random[n-4]){
			work[n-1]=min(min(random[n-3], random[n-2]), random[n-1]);
		}
		return work[n-1]+min(min(minsub(random, n-1), minsub(random, n-2)), minsub(random, n-3));
	}
}

int main(){
	long long n;
	vector<long long> sub;
	cin >> n;
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		sub.push_back(x);
	}
	cout << minsub(sub, n);
	
}
