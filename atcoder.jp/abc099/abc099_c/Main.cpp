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
    long long dp[110000];
    int N; cin >> N;

    // 初期化 (最小化問題なので INF に初期化)
    for (int i = 0; i < 110000; ++i) dp[i] = INF;

    // 初期条件
    dp[0] = 0;

    // ループ
    for (int i = 0; i < N+1; ++i) {
        for (int j = 0; j < 7; ++j) {
            if(i + int(pow(9,j)) <= N) {
                chmin(dp[i + int(pow(9,j))], dp[i] + 1);
            }
        }
        for (int j = 0; j < 8; ++j) {
            if(i + int(pow(6,j)) <= N) {
                chmin(dp[i + int(pow(6,j))], dp[i] + 1);
            }
        }
        chmin(dp[i + 1], dp[i] + 1);
    }
    // 答え
    cout << dp[N] << endl;
    return 0;
}