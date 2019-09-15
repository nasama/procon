#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;
 
 
int main() {
	int N;
	ll K;
	int Q;
	cin >> N >> K >> Q;
	int A[Q+3];
	ll ten[N+3];
	for (int i = 1; i < Q+1; i++) cin >> A[i];
	for (int i = 1; i < N+1; i++) ten[i] = K;
	for (int i = 1; i < Q+1; i++){
		ten[A[i]]++;  
	}
	for (int j = 1; j < N+1; j++){
		ten[j] = ten[j]-Q;
	}	
	for (int i = 1; i < N+1; i++){
		if(ten[i] > 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}