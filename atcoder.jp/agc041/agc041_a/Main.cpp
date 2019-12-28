#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N, A, B;
    cin >> N >> A >> B;
    ll ans;
    ll a, b, c, d, e;
    if((A-B)%2==0) {
        a = (max(A,B)-min(A,B))/2;
        b = N-min(A,B);
        c = max(A,B)-1;
        ans = min(min(a,b),c);
    }
    else{
        b = N-min(A,B);
        c = max(A,B)-1;
        d = (A+B-1)/2;
        e = (2*N-A-B+1)/2;
        ans = min(min(b,d),min(d,e));
    }
    cout << ans << endl;
    return 0;
}
