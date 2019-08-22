#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>

#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
pair<pair<string,int>,int> p[110];

int main() {
	int n; cin >> n;
	rep(i,n) {
		int t;
		string in;
		cin >> in >> t;
		p[i]=make_pair(make_pair(in,-t),i);
	}
	sort(p,p+n);
	rep(i,n) {
		cout << p[i].second+1 << endl;
	}
}