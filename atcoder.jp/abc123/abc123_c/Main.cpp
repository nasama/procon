#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N, A, B, C, D, E;
    cin >> N >> A >> B >> C >> D >> E;
    ll mn = min ({ A, B, C, D, E });
    cout << (N + (mn - 1)) / mn +  4 << endl;
    return 0;
}
