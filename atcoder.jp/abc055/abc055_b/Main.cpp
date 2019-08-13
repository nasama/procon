#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	ll answer = 1;
	for(int i = 1; i <= N; i++){
		answer=i*answer%1000000007;
	}
	cout << answer << endl;
}