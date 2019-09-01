#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;

int main() {
	int a;
	int b;
	int i = 1;
	cin >> a >> b;
	while(i < 20){
		if(i*a-i+1 >= b) break;
		i++;
	}
	if(b==1) cout << 0 << endl;
	else cout << i << endl;
}