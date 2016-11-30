#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main(){
	int n, i;
	cin >> n >> i;
	pair<int, int> a[10000];
	vector< vector<int> > b;
	for(int ii=0; ii<i; ii++){
		cin >> a[ii].first >> a[ii].second;
	}
	for(int ii=0; ii<i; ii++){
		vector<int> c;
		c.push_back(a[ii].first);
		c.push_back(a[ii].second);
		if(ii!=i-1){
		
		for(int jj=ii+1; jj<i; jj++){
			if(a[ii].first==a[jj].first){
				c.push_back(a[jj].first);
				c.push_back(a[jj].second);
				a[jj].first=-1;
				a[jj].second=-1;	
			}
			if(a[ii].first==a[jj].second){
				c.push_back(a[jj].first);
				c.push_back(a[jj].second);	
				a[jj].first=-1;
				a[jj].second=-1;
			}
			if(a[ii].second==a[jj].first){
				c.push_back(a[jj].first);
				c.push_back(a[jj].second);
				a[jj].first=-1;
				a[jj].second=-1;	
			}
			if(a[ii].second==a[jj].second){
				c.push_back(a[jj].first);
				c.push_back(a[jj].second);
				a[jj].first=-1;
				a[jj].second=-1;	
			}
		}
	}
		b.push_back(c);
	}
	int size = b.size();
	int poa = 4*(size-1);
	cout << poa;
}
