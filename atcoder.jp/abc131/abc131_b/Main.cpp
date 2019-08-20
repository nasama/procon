#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	int n, l;
	int ans = 0;
	cin >> n >> l;
	if (l <= 0 and l+n-1>=0) {
		for (int i = 1; i < n+1; i++) {
			ans += l+i-1;
		}
	}
	else if(l > 0) {
		for (int i = 2; i < n+1; i++) {
			ans += l+i-1;
		}
	}
	else {
		for (int i = 1; i < n; i++) {
			ans += l+i-1;
		}	}
	cout << ans << endl;
}