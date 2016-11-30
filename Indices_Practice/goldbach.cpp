#include<iostream>
using namespace std;

bool isprime(long long n){
	for(long long i=2; i<=n/2; i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int main(){
	long long n;
	cin >> n;
	for(long long i=3; i<n/2; i+=2){
		if(i*i>=n && isprime(i)==true && isprime(n-i)==true && (n-i)*(n-i)>=n){
			cout << i << " + " << n-i << endl;
		}
	}
}
