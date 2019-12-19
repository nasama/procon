#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    int V[52];
    int C[52];
    int ans = 0;
    cin >> N;
    rep(i,N) cin >> V[i];
    rep(i,N) cin >> C[i];
    rep(i,N) {
        int S = V[i]-C[i];
        if(S > 0) ans+=S;
    }

    cout << ans << endl;
    return 0;
}
