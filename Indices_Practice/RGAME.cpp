#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, sum=0;
		vector<int> arr;
		cin >> n;
		for(int i=0; i<n+1; i++){
			int x;
			cin >> x;
			arr.push_back(x);
		}
		for(int i=0; i<arr.size(); i++){
			for(int j=0; j<arr.size(); j++){
				if(i!=j){
					sum = sum+(arr[i]*arr[j]);
				}
			}
		}
		cout << sum << endl;
	}
}
