#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A,B,C,D;
	cin>>A>>B>>C;
	D = C-(A-B);
	if(D>=0) cout << D << endl;
	else cout << 0 << endl;
}