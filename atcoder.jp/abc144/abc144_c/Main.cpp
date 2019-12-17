#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll ans = n-1;
    for(ll i = 1; i * i <= n; i++) {
        if(n%i==0) ans = min(ans, i + n/i - 2);
    }
    cout << ans << endl;
    return 0;
}
