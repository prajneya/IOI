#include<iostream>
using namespace std;

int main(){
	int n, a[100], min_time = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	int m = -1, i = 0;
	int min_p;
	while(i < n){
		min_p = a[m+1];
		for(i = m+1; i < 3 && i < n; i++){
			if(a[i] < min_p){
				min_p = a[i];	
			}
		}
		m = i;
		min_time += min_p;
		cout << min_time << " ";
	}
	cout << min_time << endl;
}
