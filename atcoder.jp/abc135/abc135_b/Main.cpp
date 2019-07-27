#include <iostream>
#include <algorithm>
using namespace std;

bool func (int p[], int N){
	for(int k = 0; k < N; k++){
		if(k+1 != p[k]) {
			return false;
		}
	}
	return true;
}

int main() {
	int N;
	int p[55];
	bool can = false;
	int flag = 0;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> p[i];

	for(int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++) {
			swap(p[i],p[j]);
			can = func(p, N);
			if(can == true) flag = 1;
			swap(p[i],p[j]);
		}
	}

	if(flag == 1) cout << "YES" << endl;
	else cout << "NO" << endl;

}