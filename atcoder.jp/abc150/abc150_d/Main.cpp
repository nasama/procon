#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
    int v0 = a, v1 = b, v2 = a % b;
    while (v2 != 0) {
        v0 = v1;
        v1 = v2;
        v2 = v0 % v1;
    };
    return v1;
}

ll lcm(ll a, ll b) {
    return a * b / gcd(a, b);
}


int main() {
    ll N, M;
    cin >> N >> M;
    vector<ll> a(N+2);
    rep(i,N) {
        cin >> a[i];
        a[i]/=2;
    }
    ll ans = 1;
    for (ll i = 0; i < N; i++) ans = lcm(ans, a[i]);
    ll b = 0;
    for(ll i = 1; ; i+=2){
        if(ans*i > M) break;
        b++;
    }
    rep(i, N) {
        if(ans/a[i]%2==0) {
            b = 0;
            break;
        }
    }
    cout << b << endl;
    return 0;
}