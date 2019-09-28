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
	cin >> N;
	int A[N+2];
	int B[N+2];
	for (int i = 1; i < N+1; i++) {
		cin >> A[i];
	}	

	for (int i = 1; i < N+1; i++) {
		B[A[i]] = i;
	}	

	for (int i = 1; i < N+1; i++) {
		cout << B[i] << endl;
	}	
}