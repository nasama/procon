#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	int n, x, place = 0, ans = 1;

	cin >> n >> x;
	int l[n];
	rep(i,n) cin >> l[i];
	rep(i,n) {
		place += l[i];
		if(place <= x) ans++;
		else break;
	}
	cout << ans << endl;
}