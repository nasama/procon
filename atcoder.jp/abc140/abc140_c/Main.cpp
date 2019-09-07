#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	int B[N+2];
	int A[N+2];
	ll ans = 0;
	for(int i = 1; i < N; i++){
		cin >> B[i];
	}
	A[1] = B[1];
	A[N] = B[N-1];
	for(int i = 1; i < N-1; i++){
		if(B[i] <= B[i+1]){
			A[i+1] = B[i];
		}
		if(B[i] > B[i+1]){
			A[i+1] = B[i+1];
		}
	}	
	for(int i = 1; i < N+1; i++){
		ans+=A[i];
	}

	cout << ans << endl;
}