#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
map<ll, ll> m;

ll calc(ll N) {
    if(N==1) return 1;
    if(m.count(N) != 0) {
        return m[N];
    }
    else {
        m[N] = 1 + calc(N/2) + calc(N/2);
        return m[N];
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll H;
    cin >> H;
    cout << calc(H) << endl;
    return 0;
}