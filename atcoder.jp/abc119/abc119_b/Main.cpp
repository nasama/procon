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
    vector<double> x(N+2);
    vector<string> u(N+2);
    rep(i,N) cin >> x[i] >> u[i];
    double ans = 0;
    rep(i,N) {
        if(u[i]=="JPY") ans+=x[i];
        else ans+=x[i]*380000;
    }
    cout << ans << endl;
    return 0;
}
