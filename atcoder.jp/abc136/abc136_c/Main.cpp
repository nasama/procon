#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	bool answer = true;
	cin >> N;
	vector<long long> vec(N); 
	for (int i = 0; i < N; i++) {
    	cin >> vec.at(i);
	}

	long long b = -1;

	for (int i = 0; i < N-1; i++) {
		long long a = 0;
    	a = vec.at(i+1) - vec.at(i);
    	if(a <= -2) answer = false;
    	if(a == -1) {
    		if(b==-1) b = vec.at(i);
    		else if(b > vec.at(i)){
    			answer = false;
    		}
    		else if(b < vec.at(i)){
    			b = vec.at(i);
    		}
    	}

	}

	if(answer==true) cout << "Yes" << endl;
	else cout << "No" << endl;
}