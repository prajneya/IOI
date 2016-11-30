#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
	long long n;
	cin >> n;
	long long a[100];
	for(long long i=0; i<n; i++){
		cin >> a[i];
	}
	
	//nest depth and position
	long long tcount=0, count=0, tpos, pos;
	for(long long i=0; i<n; i++){
		if(a[i]==1){
			tcount++;
			if(tcount>count){
				count=tcount;
				tpos = i;
			}
		}
		if(a[i]==2){
			tcount=0;
		}
	}
	pos = (tpos-count)+2;
	cout << count << " " << pos << " ";
	
	// maximum subsequence and position
	
	stack<long long> brack;
	long long mtcount = 0, mcount=0, mtpos, mpos;
	for(int i=0; i<n; i++){
		if(a[i]==1){
			if(brack.top()==NULL){
				mtcount = 0;
				mtpos = i+1;
			}
			brack.push(a[i]);
		}
		if(a[i]==2){
			brack.push(a[i]);
			brack.pop();
			if(brack.top()==1){
				brack.pop();
			}
			mtcount+=2;
			if(mtcount>mcount){
				mcount = mtcount;
			}
		}
	}
	mpos = (mtpos-mcount)+1;
	
	cout << mcount << " " << mpos << endl; 
	
	
	
	
	
	
}
