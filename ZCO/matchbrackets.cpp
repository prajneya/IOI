#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long n, x;
	cin >> n;
	vector<long long> brack;
	for(long long i=0; i<n; i++){
		cin >> x;
		brack.push_back(x);
	}
	
	long long tcount=0, count=0, tpos, pos;
	
	for(long long i=0; i<n; i++){
		if(brack[i]==1){
			tcount++;
			if(tcount>count){
				count = tcount;
				tpos = i;
			}
		}
		else{
			tcount = 0;
		}
	}
	pos = (tpos-count)+2;

	cout << count << endl; //nested depth
	cout << pos+(count-1) << endl; //nested depth position
	
	for(long long i=0; i<n; i++){
		if(brack[i]==2){
			brack[i]=-1;
		}
	}	
	long long sum = 0, mtcount=0, mcount=0, mtpos, mpos;
	for(long long i=0; i<n; i++){
		sum+=brack[i];
		if(sum!=0){
			mtcount++;
			if(mtcount>mcount){
				mcount=mtcount;
				mtpos = i;
			}
		}
		if(sum==0){
			mtcount=0;
		}
	}
	mpos = (mtpos-mcount)+2;
	cout << mcount+1 << endl;
	cout << mpos << endl;
}
