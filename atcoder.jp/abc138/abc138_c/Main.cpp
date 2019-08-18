#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;

int main() {
	int N;
	long double number = 0.0;
	long double answer = 0.0;
	cin >> N;
	int V[N];
	for(int i = 0; i < N; i++) cin >> V[i];
	sort(V, V+N);
	number = V[0];
	for(int i = 0; i < N-1; i++) {
		number = (number+V[i+1])/2;

	}
	cout << number <<endl;	
}