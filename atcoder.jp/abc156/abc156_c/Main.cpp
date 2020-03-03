#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int x[100];
    cin >> n;
    rep(i,n) cin >> x[i];
    int ans = 300000;
    rep(i,100) {
        int sum = 0;
        rep(j,n) {
           sum+=(i-x[j])*(i-x[j]);
        }
        ans = min(ans, sum);
    }
    cout << ans << endl;
    return 0;
}