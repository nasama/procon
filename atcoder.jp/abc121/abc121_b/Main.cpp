#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> B(M);
    rep(i,M) cin >> B[i];
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
        cin >> A[i][j];
        }
    }
    int ans = 0;
    rep(i,N) {
        int sum = 0;
        rep(j,M){
            sum += A[i][j]*B[j];
        }
        sum += C;
        if(sum > 0) ans++;
    }

    cout << ans << endl;
    return 0;
}

