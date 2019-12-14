#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
	string str;
	cin >> str;
    int len  = (int)(str.length());
    int flag = 0;
	for(int i = 0; i < len/2; i++){
        if (str[i] != str[len-1-i]) {
            flag++;
        }
	}
    cout << flag << endl;
}