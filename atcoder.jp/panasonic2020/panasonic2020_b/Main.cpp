#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ll H, W;
    cin >> H >> W;
    ll ans =  (H*W+1)/2;
    if (H == 1 or W == 1) {
        ans = 1;
    }
    cout << ans << endl;
    return 0;
}