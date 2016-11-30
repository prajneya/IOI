#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long findlcm(long long a, long long b){
	if(a>b){
		for(int i=1; i<=b; i++){
			if((a*i)%b==0){
				return a*i;
			}
		}
	}
	else if(b>a){
		for(int i=1; i<=a; i++){
			if((b*i)%a==0){
				return b*i;
			}
		}
	}
	else{
		return a;
	}
	
}

int main(){
	long long t;
	cin >> t;
	while(t--){
		vector<long long> sensor;
		long long n;
		cin >> n;
		for(int i=0; i<n; i++){
			long long x;
			cin >> x;
			sensor.push_back(x);
		}
		long long a, b, c;
		a = *min_element(sensor.begin(), sensor.end());
		for(long long i=0; i<n; i++){
			if(sensor[i]==a){
				c = i;
				break;
			}
		}
		
		sensor.erase(sensor.begin()+c);
		b = *min_element(sensor.begin(), sensor.end());
		cout << findlcm(a, b) << endl;
	}
}
