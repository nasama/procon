#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> a(N);
    rep(i,N) cin >> a[i];
    ll ans = 0;
    ll j = 1;
    rep(i,N) {
        if(a[i] == j) j++;
    }
    if(j==1) cout << -1 << endl;
    else cout << N - (j-1) << endl;
    return 0;
}
