#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int H, W, h, w;
    cin >> H >> W >> h >> w;
    int ans = H*W - (h*W + w*H - h*w);
    cout << ans << endl;
    return 0;
}

