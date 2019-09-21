#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	int H, W, A, B;
	cin >> H >> W >> A >> B;
	int S[1002][1002] = {0};
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			if(i < B and j >= A) { 
				S[i][j] = 1;
			}
			if(i >= B and j < A) { 
				S[i][j] = 1;
			}
		}	
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < W; j++) {
			cout << S[i][j];
		}	
		cout << endl;
	}
}