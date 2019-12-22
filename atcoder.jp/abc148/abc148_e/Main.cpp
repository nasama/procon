#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    ll ans = 0;
    if(N%2==0){
        for (ll i = 10; i <= N; i*=5){
            ans+=(N/i);
        }
    }
    cout << ans << endl;
    return 0;
}
