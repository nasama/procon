#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;


int main() {
	int n;
	cin >> n;
	int p[n];
	rep(i,n) {
		cin >> p[i];
	}
	int ans = 0;	
	rep(i,n-2) {
		if((p[i] < p[i+1] && p[i+1] < p[i+2]) ||  (p[i] > p[i+1] && p[i+1] > p[i+2])) {
			++ans;
		}
	}
	cout << ans << endl;
}