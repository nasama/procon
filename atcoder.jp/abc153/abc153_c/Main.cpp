#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<ll> A(N);
    rep(i,N) {
        cin >> A[i];
    }
    sort(A.begin(),A.end(),greater<ll>());
    ll ans = 0;
    for(int i = K; i < N; i++) {
        ans += A[i];
    }
    cout << ans << endl;    
    return 0;
}