#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long total = 1;
	pair<long long, long long> in[n];
	for(int i=0; i<n; i++){
		cin >> in[i].first >> in[i].second;
	}
	long long x =0, y=1;
	while(x<n-1){
		while(y<n){
			if(in[x].second<in[y].first){
				x++;
				y++;
				total++;
			}
			else{
				x++;
				y++;
			}
		}
	}
	cout << total;
}
