#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

int main(){
	int n, c, p, d;
	cin >> n;
	pair<int, int> a[200000];
	for(int i=0; i<n; i++){
		cin >> c >> p >> d;
		a[i].first = d+p;
		a[i].second = c;
	}
	
	sort(a, a+n);
	
	int worst = 0, temp;
	c = 0;
	for(int i=n-1; i>=0; i--){
		c = c+a[i].second;
		temp = c + a[i].first;
		if(worst<temp){
			worst = temp;
		}
	}
	cout << worst;
}
