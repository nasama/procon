#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	bool answer = false;
	int A, B, C;
	cin >> A >> B >> C;
	for(int i = 1; i <= B; i++){
		if(i*A%B==C){
			answer = true;
		}
	}
	if(answer==true) cout << "YES" << endl;
	else cout << "NO" << endl;
}