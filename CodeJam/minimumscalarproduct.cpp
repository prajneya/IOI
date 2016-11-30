#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;

int main(){
	freopen("inmsp.in","r",stdin);
	ofstream myfile;
	myfile.open("msp.txt");
	long long t, count=1;
	cin >> t;
	while(t--){
		long long n, msp = 0;
		cin >> n;
		vector<long long> x, y;
		for(long long i = 0; i<n; i++){
			long long a;
			cin >> a;
			x.push_back(a);
		}
		for(long long i = 0; i<n; i++){
			long long a;
			cin >> a;
			y.push_back(a);
		}
		sort(x.begin(), x.end());
		sort(y.begin(), y.end());
		reverse(y.begin(), y.end());
		for(long long i=0; i<n; i++){
			msp = msp + (x[i]*y[i]);
		}
		myfile << "Case #" << count << ": " << msp << endl;
		count++;
	}
	myfile.close();
}
