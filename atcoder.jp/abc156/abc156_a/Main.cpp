#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, r;
    cin >> n >> r;
    int ans;
    if(n < 10) ans = 100 * (10-n) + r;
    else ans = r;
    cout << ans << endl;
    return 0;
}