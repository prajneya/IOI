#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long min_index(long long first, long long last, vector<long long> ran){
	long long min;
	min = *min_element(ran.begin()+first, ran.begin()+(last+1));
	for(long long i=first; i<=last; i++){
		if(ran[i]==min){
			return i;
		}
	}
}

int main(){
	long long n;
	cin >> n;
	vector<long long> s;
	long long x, d;
	for(long long i=0; i<n; i++){
		cin >> x;
		s.push_back(x);
	}
	long long sum = s[0];
	for(long long i=1; i<3; i++){
		if(s[i]<sum){
			sum = s[i];
			d = i;
		}
	}

	long long e;
	for(long long i=d; i<n;){
		sum+=*min_element(s.begin()+(i+1), s.begin()+(i+4));
		e = min_index(i+1, i+3, s);
		i = e;
		
	}
	cout << sum << endl;
}
