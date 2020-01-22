#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int X, t;
    cin >> X >> t;
    if(X-t<0) {
        cout << 0 << endl;
    }
    else {
        cout << X-t << endl;
    }
    return 0;
}