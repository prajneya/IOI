#include <iostream>
#include <vector>
using namespace std;

int main() {
	
	// your code here

	int n;
	vector<int> v;
	while(n!=42){
		cin >> n;
		v.push_back(n);
	}
	for(int i=0; i<v.size()-1; i++){
		cout << v[i] << endl;
	}
}
