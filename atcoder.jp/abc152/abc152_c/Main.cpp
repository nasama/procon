#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    ll P[1000000];
    for(ll i = 0; i < N; i++) cin >> P[i];
    pair<ll, ll> itv[N];
    for(ll i = 0; i < N; i++) {
        itv[i].first = P[i];
        itv[i].second = i+1;
    }
    sort(itv, itv + N);

    ll ans = 0, t = N+1;
    for(ll i = 0; i < N; i++) {
        if(t > itv[i].second) {
            ans++;
            t = itv[i].second;
        }
    }
    cout << ans << endl;
    return 0;
}