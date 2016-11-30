#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long swapatob(vector<long long>a, vector<long long> b){
	long long maxa, maxb, minb;
	maxa = *max_element(a.begin(), a.end());
	minb = *min_element(b.begin(), b.end());
	a.erase(remove(a.begin(), a.end(), maxa), a.end());
	b.push_back(maxa);	
	b.erase(remove(b.begin(), b.end(), minb), b.end());
	a.push_back(minb);
	maxa = *max_element(a.begin(), a.end());
	maxb = *max_element(b.begin(), b.end());
	
	long long sum;
	sum = maxa+maxb;
	
	return sum;
	
}

vector<long long> swapatobVEC1(vector<long long>a, vector<long long> b){
	long long maxa, maxb, minb;
	maxa = *max_element(a.begin(), a.end());
	minb = *min_element(b.begin(), b.end());
	a.erase(remove(a.begin(), a.end(), maxa), a.end());
	b.push_back(maxa);	
	b.erase(remove(b.begin(), b.end(), minb), b.end());
	a.push_back(minb);
	maxa = *max_element(a.begin(), a.end());
	maxb = *max_element(b.begin(), b.end());
	
	return a;
	
}

vector<long long> swapatobVEC2(vector<long long>a, vector<long long> b){
	long long maxa, maxb, minb;
	maxa = *max_element(a.begin(), a.end());
	minb = *min_element(b.begin(), b.end());
	a.erase(remove(a.begin(), a.end(), maxa), a.end());
	b.push_back(maxa);	
	b.erase(remove(b.begin(), b.end(), minb), b.end());
	a.push_back(minb);
	maxa = *max_element(a.begin(), a.end());
	maxb = *max_element(b.begin(), b.end());
	
	return b;
	
}

int main(){
	long long n, k, sum;
	cin >> n >> k;
	vector<long long> a, b;
	vector<long long>tempa, tempb;
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		a.push_back(x);
	}
	for(long long i=0; i<n; i++){
		long long x;
		cin >> x;
		b.push_back(x);
	}
	while(k--){
		if(swapatob(a, b)>=swapatob(b, a)){
			sum = swapatob(b, a);
			tempa = swapatobVEC1(b, a);
			tempb = swapatobVEC2(b, a);
			
		}
		else{
			sum = swapatob(a, b);
			tempa = swapatobVEC1(a, b);
			tempb = swapatobVEC2(a, b);
		}
		for(int i=0; i<a.size(); i++){
				a[i] = tempa[i];
			}
		for(int i=0; i<b.size(); i++){
			b[i] = tempb[i];
		}
	}
	cout << sum << endl;
	
}
