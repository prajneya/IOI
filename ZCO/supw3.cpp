#include<iostream>
#include<vector>
using namespace std;

long long dp[100];

long long supw(vector<long long> a, long long n){
	if(n==0){
		return 0;
	}
	if(n==1){
		dp[1]=a[0];
		return dp[1];
	}
	if(n==2){
		dp[2]=min(a[0], a[1]);
		return dp[2];
	}
	if(n==3){
		if(dp[1]==0){
			dp[1]=a[0];
		}
		if(dp[2]==0){
			dp[2]=min(a[0], a[1]);
		}
		dp[3] = min(dp[1], a[2]);
		return dp[3];
	}
	else{
		if(dp[n-3]==0){
			dp[n]=min(min(supw(a, n-1), supw(a, n-2)), supw(a, n-3))+min(a[n], a[n-1]);
		}
		else if(dp[n-2]==0){
			dp[n]=min(min(supw(a, n-1), supw(a, n-2)), dp[n-3])+min(a[n], a[n-1]);	
		}
		else if(dp[n-1]==0){
			dp[n]=min(min(supw(a, n-1), dp[n-2]), dp[n-3])+min(a[n], a[n-1]);	
		}
		else{
			dp[n]=min(min(dp[n-1], dp[n-2]), dp[n-3])+min(a[n], a[n-1]);	
		}
		return dp[n];
	}
	
	
}

int main(){
	long long n;
	cin >> n;
	vector<long long> a;
	int b[100];
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		a.push_back(x);
	}

		a.push_back(0);
		a.push_back(0);	

    cout << supw(a, n) << endl;
	
	
}
