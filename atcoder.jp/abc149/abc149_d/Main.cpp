#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, K, R, S ,P;
    string T;
    cin >> N >> K >> R >> S >> P >> T;
    vector<int> A(N+1, 0);
    map<char, int> m;
    m['r'] = P;
    m['s'] = R;
    m['p'] = S;
    int ans = 0;
    for(int i = 0; i < N; i++) {
        A[i] = 0;
        if(i < K) {
            ans += m[T[i]];
            A[i] = 1;
        }
        if(i >= K && i < 2*K) {
            if(T[i]!=T[i-K]) {
                ans+=m[T[i]];
                A[i] = 1;
            }
        }
        if(i >= 2*K) {
            if(T[i]!=T[i-K]) {
                ans+=m[T[i]];
                A[i] = 1;
            }
            if(T[i]==T[i-K] && A[i-K]==0) {
                ans+=m[T[i]];
                A[i] = 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
