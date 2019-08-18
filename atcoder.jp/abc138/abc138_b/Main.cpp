#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

int main() {
	int N;
	long double total = 0.0;
	long double answer = 0.0;
	cin >> N;
	int A[N];
	for(int i = 0; i < N; i++) cin >> A[i];
	for(int i = 0; i < N; i++) {
		total += 1.0/A[i];
	}

	answer = 1.0/total;
	cout << answer <<endl;
}