#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n, h;
	cin >> n >> h;
	vector<int> a, b;
	bool pick=false;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		a.push_back(x);
	}
	
	int x;
	do{
		cin >> x;
		b.push_back(x);
	}while(x!=0);
	
	int index=0;
	
	for(int i=0; i<b.size(); i++){
		if(b[i]==1 && index!=0){
			index = index-1;
		}
		if(b[i]==2 && index!=a.size()-1){
			index = index+1;
		}
		if(b[i]==3 && a[index]!=0 && pick==false){
			a[index]=a[index]-1;
			pick=true;
		}
		if(b[i]==4 && a[index]+1<=h && pick==true){
			a[index]=a[index]+1;
			pick=false;
		}
	}
	
	for(int i=0; i<a.size(); i++){
		cout << a[i] << " ";
	}
	
}
