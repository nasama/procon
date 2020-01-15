#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;
    ll x = 1LL<<M;
    ll y = 1900LL * M + 100LL * (N-M);
    cout << x * y << endl;
    return 0;
}
