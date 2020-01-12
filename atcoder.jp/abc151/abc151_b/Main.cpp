#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, K, M;
    cin >> N >> K >> M;
    vector<int> A(N+2);
    int sum = 0;
    rep(i,N-1) {
        cin >> A[i];
        sum += A[i];
    }
    if(N*M-sum<=0) {
        cout << 0 << endl;
    }
    else if(N*M-sum<=K) {
        cout << N*M-sum << endl;
    }
    else cout << -1 << endl;
    return 0;
}
