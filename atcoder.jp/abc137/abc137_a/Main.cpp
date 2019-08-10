#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int A, B;
	cin>>A>>B;
	int C = max(A+B,A-B);
	int answer = max(C, A*B);
	cout<<answer<<endl;
}
