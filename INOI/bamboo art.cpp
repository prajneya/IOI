#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long n;
	cin >> n;
	vector<long long> a, vcount;;
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		a.push_back(x);
	}
	sort(a.begin(), a.end());
	long long diff, count = 0, temp_diff;
	for(long long i=0; i<a.size()-1; i++){
		for(long long j=i+1; j<a.size(); j++){
			diff = a[j]-a[i];
			count++;
			temp_diff = diff;
			for(long long k=j+1; k<a.size(); k++){
				if(k==n){
					break;
				}
				if(a[k]==a[j]+diff){
					count++;
					diff = diff+temp_diff;
				}
			}
			vcount.push_back(count);
			count = 0;
		}
		
	}
	cout << *max_element(vcount.begin(), vcount.end())+1 << endl;
}
