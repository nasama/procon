#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int txa, tya, txb, tyb, T, V, N;
    cin >> txa >> tya >> txb >> tyb >> T >> V >> N;
    vector<int> x(N);
    vector<int> y(N);
    bool ans = false;
    double max = T*V;
    rep(i,N) {
        cin >> x[i] >> y[i];
        double dist = sqrt(pow(x[i] - txa, 2.0) + pow(y[i] - tya, 2.0)) + sqrt(pow(x[i] - txb, 2.0) + pow(y[i] - tyb, 2.0));
        if(max >= dist) ans = true;
    }

    if(ans) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}