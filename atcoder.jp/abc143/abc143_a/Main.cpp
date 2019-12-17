#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;

int A, B, ans;

void solve() {
    cin >> A >> B;
    if(2*B >= A) ans = 0;
    else ans = A - 2*B;
    cout << ans << endl;
    return; 
}

int main() {
    solve();
    return 0;
}
