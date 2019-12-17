#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    string s;
    cin >> n >> s;
    ll ans = 1;
    rep(i,n-1) {
        if(s[i] != s[i+1]) ans++;
    }
    cout << ans << endl;
    return 0;
}
