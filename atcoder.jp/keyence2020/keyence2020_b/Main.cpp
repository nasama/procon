#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    ll X[100002];
    ll L[100002];
    ll S[100002];
    ll T[100002];  
    pair<ll, ll> itv[100002];
    cin >> N;
    for(ll i = 0; i < N; i++) {
        cin >> X[i] >> L[i];
        S[i] = X[i]-L[i];
        T[i] = X[i]+L[i];
    }
    for(ll i = 0; i < N; i++) {
        itv[i].first = T[i];
        itv[i].second = S[i];
    }
    sort(itv, itv + N);

    ll ans = 0;
    ll t = -10000000002;
    for(ll i = 0; i < N; i++) {
        if(t <= itv[i].second) {
            ans++;
            t = itv[i].first;
        }
    }
    cout << ans << endl;
    return 0;
}