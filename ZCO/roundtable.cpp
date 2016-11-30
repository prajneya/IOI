#include<iostream>
#include<vector>
using namespace std;

int main(){
	long long n;
	cin >> n;
	vector<long long> d;
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		d.push_back(x);
	}
	long long sum = 0;
	d.push_back(1001);
	for(long long i=0; i<n;){
		if(n==1){
			cout << d[0] << endl;
			break;
		}
		if(d[i]>=d[i+1] && d[i]!=1001 && d[i+1]!=1001){
			sum+=d[i+1];
			i=i+2;
		}
		else{
			if(d[i+1]!=1001 && d[i]!=1001){
				sum+=d[i];
				i++;
			}
			else{
				break;
			}
			
		}
		
	}
	if(n!=1){
		cout << sum << endl;
	}
	
}
