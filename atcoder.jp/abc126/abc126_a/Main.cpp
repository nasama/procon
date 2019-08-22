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
	string S;
	cin >> N >> K >> S;
	if(S[K-1] ==  'A') {
		S[K-1] = 'a';
	}
	else if(S[K-1] ==  'B') {
		S[K-1] = 'b';
	}
	else {
		S[K-1] = 'c';
	}
	cout << S << endl;
}