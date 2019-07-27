#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main() {
	long long  N;
	long long input;
	vector<long long> A;
	vector<long long > B;
	long long i;
	long long total = 0;
	cin >> N;
	for (i = 0; i < N+1; i++) {
		cin >> input;
		A.push_back(input);
	}
 
	for (i = 0; i < N; i++) {
		cin >> input;
		B.push_back(input);
	}
 
	for (i = 0; i < N; i++) {
		if((A[i] - B[i]) >= 0) total += B[i];
		else {
			total += A[i];
			if((A[i+1] - abs(A[i] - B[i])) >= 0) {
				total += abs(A[i] - B[i]);
				A[i+1] -= abs(A[i] - B[i]);
			}
				
			else {
				total += A[i+1];
				A[i+1] = 0;
			}
		}
	}
	cout << total << endl;
}