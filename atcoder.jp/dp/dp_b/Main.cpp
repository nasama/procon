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
    long long h[110000];
    long long dp[110000];
    int N, K; cin >> N >> K;
    for (int i = 0; i < N; ++i) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 110000; ++i) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    rep(i,N) {
        rep2(j,K+1) chmin(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }

    // 答え
    cout << dp[N-1] << endl;
    return 0;
}