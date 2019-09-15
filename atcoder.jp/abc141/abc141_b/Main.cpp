#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	string S; cin >> S;
	int flag = 0;
	for (int i = 0; i < S.size(); i=i+2) {
		if(S[i] == 'L') flag = 1;
	}
	for (int i = 1; i < S.size(); i=i+2) {
		if(S[i] == 'R') flag = 1;
	}
	if(flag == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
}