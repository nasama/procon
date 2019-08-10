#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int K,X,min,max;
	cin>>K>>X;
	min = X-(K-1);
	max = X+(K-1);
	if(min < -1000000) min = -1000000;
	if(max > 1000000) max = 1000000;
	for (int i = min; i <= max; i++) cout<<i<<' ';
	cout<<endl;
}
