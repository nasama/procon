#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, K;
	cin >> N >> K;
	int answer = K;
	for(int i = 1; i < N; i++){
		answer*=(K-1);
	}
	cout << answer << endl;
}