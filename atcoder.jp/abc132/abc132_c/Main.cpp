#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin >> N;
    vector<int> d(N);
    rep(i,N) cin >> d[i];
    sort(d.begin(), d.end());
    int h = N/2;
    int ans = 0;
    if(d[h]>d[h-1]) ans = d[h]-d[h-1];
    cout << ans << endl;
    return 0;
}
