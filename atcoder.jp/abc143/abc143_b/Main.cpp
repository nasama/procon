#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int d[102];
    int sum = 0;
    cin >> n;
    rep(i,n) cin >> d[i];
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++){
            sum += d[i] * d[j];
        }
    }
    cout << sum << endl;
    return 0;
}
