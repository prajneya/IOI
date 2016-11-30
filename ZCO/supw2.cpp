#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long n;
	cin >> n;
	vector<long long> s;
	long long x, sum=0;
	for(long long i=0; i<n; i++){
		cin >> x;
		s.push_back(x);
	}
	if(n%3==1){
		s.push_back(0);
		s.push_back(0);
	}
	if(n%3==2){
		s.push_back(0);
	}
	for(long long i=0; i<n;){
		sum+=min(s[i], min(s[i+1], s[i+2]));
	}
	cout << sum << endl;
}
