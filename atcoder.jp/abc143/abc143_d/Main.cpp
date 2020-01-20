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
    vector<ll> v(N);
    rep(i,N) cin >> v[i];
    sort(v.begin(), v.end());
    int ans = 0;
    for(int mid = N - 1; mid >= 0; mid--) {
        for(int low = mid - 1; low >= 0; low--) {
            //v[mid] + v[low]　以上の最初のイテレータ
            auto itr = lower_bound(v.begin(), v.end(), v[mid] + v[low]);
            //itrから最後までの個数
            int ng = distance(itr, v.end());
            ans += (N - 1 - mid) - ng;
        }
    }
    cout << ans << endl;
    return 0;
}