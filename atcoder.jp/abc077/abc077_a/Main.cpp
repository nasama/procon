#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    char C[2][3];
    cin >> C[0] >> C[1];
    if((C[0][0] == C[1][2]) && (C[0][1] == C[1][1]) && (C[0][2] == C[1][0])) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    return 0;
}