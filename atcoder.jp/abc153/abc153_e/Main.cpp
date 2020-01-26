#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

const long long INF = 1LL << 60;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll H, N;
    cin >> H >> N;
    vector<ll> A(N);
    vector<ll> B(N);
    for(ll i = 0; i < N; i++){
        cin >> A[i] >> B[i];
    }
    vector<ll> dp(1100000, INF);

    // 初期条件
    dp[0] = 0;
    // ループ
    for (ll i = 0; i < 110000; i++) {
        for(ll j = 0; j < N; j++) {
            if(dp[i]!=INF)chmin(dp[i + A[j]], dp[i] + B[j]);
        }
    }

    //答え
    ll min_num = INF;
    for(ll i = H; i<H+10000; i++) {
        if(dp[i]!=INF) {
            min_num = min(dp[i], min_num);
        }
    }
    cout << min_num << endl;
    return 0;
}