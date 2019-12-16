#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;

int N;

void solve() {
    cin >> N;
    rep2(i, 10) {
        rep2(j, 10) {
            if(i*j == N) {
                cout << "Yes" << endl;
                return;
            }
        }
    }
    cout << "No" << endl;
    return; 
}

int main() {
    solve();
    return 0;
}
