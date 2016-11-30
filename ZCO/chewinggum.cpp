#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	int n, k, x;
	cin >> n >> k;
	vector<int> chew;
	for(int i=0; i<n; i++){
		cin >> x;
		chew.push_back(x);
	}
	for(int i=0; i<n; i++){
		if(chew[i]>=k){
			chew[i]=-1;
		}
	}
	
	chew.erase(remove(chew.begin(), chew.end(), -1), chew.end());
	sort(chew.begin(), chew.end());
	
	int count=0, j=chew.size()-1;
	
	for(int i=0; i<chew.size(); i++){
		if(chew[i]+chew[j]<k && i!=j){
			count+=(j-i);
			j=chew.size()-1;
			continue;
		}
		else if(i==j){
			j=chew.size()-1;
			continue;
		}
		else{
			j--;
			i=i-1;
		}
	}
	cout << count << endl;
}
