#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A, B, C, K;
	cin >> A >> B;
	C = abs(A - B); 
	if(C%2==0) cout << (A+B) / 2 << endl;
	else cout << "IMPOSSIBLE" << endl;
}