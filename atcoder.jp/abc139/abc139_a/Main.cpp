#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;

int main() {
	string s;
	string t;
	cin >> s >> t;
	int ans = 0;
	if(s[0]==t[0]) ans++;
	if(s[1]==t[1]) ans++;
	if(s[2]==t[2]) ans++;
	cout << ans << endl;
}