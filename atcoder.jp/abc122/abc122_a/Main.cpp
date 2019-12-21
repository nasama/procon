#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char b;
    cin >> b;
    if(b == 'A') {
        cout << 'T' << endl;
    } else if (b == 'T'){
        cout << 'A' << endl;
    } else if (b == 'G'){
        cout << 'C' << endl;
    } else {
        cout << 'G' << endl;
    }
    return 0;
}
