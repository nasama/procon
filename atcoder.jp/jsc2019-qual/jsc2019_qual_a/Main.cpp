#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
	int M, D;
	cin >> M >> D;
	int ans = 0;
	for(int i = 1; i < M+1; i++){
		for(int j = 1; j < D+1; j++){
			int d1=j%10;
			int d2=j/10;
			if(d1>=2&&d2>=2&&d1*d2==i){
				ans++;
			}
		}
	}
	cout << ans << endl;
}