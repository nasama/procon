#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	int N, K;
	int ans = 0;

	cin >> N >> K;
	int h[N+2];
	for (int i = 0; i < N; i++) {
		cin >> h[i];
	}

	for (int i = 0; i < N; i++) {
		if(h[i] >= K) ans++;
	}	

	cout << ans << endl;
	return 0;
}