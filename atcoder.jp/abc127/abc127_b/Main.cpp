#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	int r,D,x; cin >> r >> D >> x;
	rep(i,10) {
		x = r*x-D;
		cout << x << endl;
	}

}