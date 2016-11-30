#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	long long n, area;
	cin >> n;
	vector<long long> a, b;
	for(int i=0; i<n; i++){
		long long x, y;
		cin >> x;
		cin >> y;
		a.push_back(x);
		b.push_back(y);
	}
	// right rectangle
	long long right_max, right_area;
	right_max = *max_element(a.begin(), a.end());
	right_area = 500*(100000-right_max);
	
	// right half rectangle
	long long rightHMax, rightBotMin, rightHArea;
	rightHMax = *max_element(a.begin(), a.end());
	rightBotMin = 
	
	//left rectangle
	long long left_min, left_area;
	left_min = *min_element(a.begin(), a.end());
	left_area = 500*left_min;
	
	//left half rectangle
	long long left_min, leftbotMin, leftArea;
	left_min = *min_element(a.begin(), a.end());
	leftbotMin = *min_element(b.begin(), b.end());
	leftArea = left_min*leftbotMin;
	
	//mid rectangle
	long long mid_min, mid_max, mid_area;
	vector<long long> midArea;
	for(int i=0; i<n-1; i++){
		mid_min=a[i];
		mid_max=a[i+1];
		mid_area = 500*(mid_max-mid_min);
		midArea.push_back(mid_area);

	}
	mid_area = *max_element(midArea.begin(), midArea.end());
	
	// mid half rectangle
	long long mid_Hmin, mid_Hmax, midMinBot, midHArea;

	for(int i=0; i<n-1; i++){
		mid_Hmin=a[i];
		mid_Hmax=a[i+1];
		midMinBot = max(b[i], b[i+1]);
		
		midHArea = (mid_Hmax-mid_Hmin)*midMinBot;
		midArea.push_back(midHArea);

	}
	
	//bottom rectangle
	long long bot_min, bot_area;
	bot_min = *min_element(b.begin(), b.end());
	bot_area = 100000*bot_min;

	area = max(max(max(right_area, left_area), mid_area), bot_area);
	
	cout << area << endl;
}
