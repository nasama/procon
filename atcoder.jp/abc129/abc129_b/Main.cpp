#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	int n; cin >> n;
	int w[n];
	int ans = 100000;
	rep(i,n) cin >> w[i];
	rep(t,n) {
		int left = 0;
		int right = 0;
		rep(j,t){
			left += w[j];
		}
		for(int k = t; k < n; k++){
			right += w[k];
		}
		ans = min(abs(left - right),ans);
	}
	cout << ans << endl;
}