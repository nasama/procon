#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	string n; cin >> n;
	string ans;
	if (n == "Sunny") ans = "Cloudy";
	else if(n == "Cloudy") ans = "Rainy";
	else ans = "Sunny";
	cout << ans << endl;
}