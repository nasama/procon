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
    int N;
    long long h[100010];

    // DP テーブル
    long long dp[100010];

    cin >> N;
    rep(i,N) cin >> h[i];

    // 初期化 (最小化問題なので INF に初期化)
    rep(i,100010) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    rep2(i,N) {
        chmin(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if (i > 1) chmin(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }

    // 答え
    cout << dp[N-1] << endl;
    return 0;
}