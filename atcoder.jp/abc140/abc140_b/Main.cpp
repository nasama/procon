#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	int A[N+2], B[N+2], C[N+2];
	int ans = 0;
	for(int i = 1; i < N+1; i++){
		cin >> A[i];
	}
	for(int i = 1; i < N+1; i++){
		cin >> B[i];
	}
	for(int i = 1; i < N; i++){
		cin >> C[i];
	}
	ans+=B[A[1]];

	for(int i = 2; i < N+1; i++){
		ans+=B[A[i]];
		if(A[i]==A[i-1]+1){
			ans+=C[A[i-1]];
		}
	}
	cout << ans << endl;
}