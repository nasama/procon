#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;


int main() {
	int n, d;
	int ans = 0;	
	cin >> n >> d;
	int x[n][d];

	rep(i,n) {
		rep(j,d) {
			cin >> x[i][j];
		}
	}

	rep(i,n) {
		for (int j = i+1; j < n; j++) {
			int total = 0;
			rep(k,d) {
				total += pow(x[i][k] - x[j][k], 2.0);
			}
			double x = sqrt(total);
			if (ceil(x) == floor(x))  ++ans;
		}
	}

	cout << ans << endl;
}