#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n, k;
	cin >> n >> k;
	vector<int> seq;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		seq.push_back(x);
	}
	int sum = 0, temp;
	for(int i=k-1; i<n;){
		if(i==n-1){
			temp = i;
			break;
		}
		if(i==n-2){
			if(seq[n-1]>0){
				sum+=seq[n-1];
				temp = i;
			}
		}
		if(i!=n-1 || i!=n-2){
			if(seq[i+1]>seq[i+2]){
				sum+=seq[i+1];
				i = i+1;
			}
			else{
				sum+=seq[i+2];
				i=i+2;
			}	
		}
		
	}
	
	for(int i=temp; i>=0;){
		if(i==0){
			break;
		}
		if(i==1){
			if(seq[0]>0){
				sum+=seq[0];
			}
		}
		
		if(i!=1 || i!=0){
			if(seq[i-1]>seq[i-2]){
				sum+=seq[i-1];
				i = i-1;
			}
			else{
				sum+=seq[i-2];
				i=i-2;
			}	
		}
		
	}
	
	cout << sum;
}
