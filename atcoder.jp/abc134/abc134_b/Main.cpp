#include<iostream>
using namespace std;

int main(){
	int N, D, answer;
	cin >> N >> D;
	if(N%(2*D+1) == 0){
		answer = N/(2*D+1);
	}
	else{
		answer = N/(2*D+1)+1;
	}
	cout << answer << endl;
	return 0;
}