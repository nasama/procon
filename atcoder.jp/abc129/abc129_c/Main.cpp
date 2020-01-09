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
    // 入力
    int N, M;
    cin >> N >> M;
    long long a[100010];
    rep(i,M) cin >> a[i];

    // DP テーブル
    long long dp[100010];

    // 初期化 
    rep(i,100010) {
        dp[i] = INF;
    }
    rep(i,M) {
        dp[a[i]] = 0;
    }

    // 初期条件
    dp[0] = 1;

    // ループ
    rep2(i,N+1) {
        if (i > 1) {
            if(dp[i] !=  0) {
                dp[i] = dp[i-1] + dp[i-2];
                dp[i] %= 1000000007; 
            }
        }
        else {
            if(dp[i] !=  0) dp[i] = dp[i-1];
            dp[i] %= 1000000007;
        }
    }

    // 答え
    cout << dp[N] << endl;
    return 0;
}