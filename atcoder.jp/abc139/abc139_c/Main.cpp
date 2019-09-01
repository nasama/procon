#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;

int main() {
	int n;
	cin >> n;
	int h[n+2];
	for (int i = 0; i < n; i++){
		cin >> h[i];
	}	

	int ans = 0;
	int flag = 0;
	int max = 0;
	for (int i = 0; i < n-1; i++){
		if(h[i] >= h[i+1]){ 
			flag++;
			if(max < flag) {max = flag;}
		}
		else {
			if(max < flag) {max = flag;}
			flag = 0;
		}
	}
	cout << max << endl;
}