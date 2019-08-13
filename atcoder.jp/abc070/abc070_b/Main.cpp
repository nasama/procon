#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	int answer = min(B,D)-max(A,C);
	if(answer>0) cout << answer << endl;
	else cout << 0 << endl;
}