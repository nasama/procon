#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, A[3][3], b[10];
    bool appear[3][3];
    rep(i,3) {
       rep(j,3) cin >> A[i][j]; 
    }
    cin >> N;
    rep(i,N) cin >> b[i];
    rep(i,N) {
        rep(j,N) {
            appear[i][j] = false;
            rep(k,N) {
                if(A[i][j] == b[k]) appear[i][j] = true;
            }
        }
    }
    string ANS = "No";
    rep(i,3) {
        if(appear[i][0] and appear[i][1] and appear[i][2]) ANS = "Yes";
    }
    rep(i,3) {
        if(appear[0][i] and appear[1][i] and appear[2][i]) ANS = "Yes";
    }
    if(appear[0][0] and appear[1][1] and appear[2][2]) ANS = "Yes";
    if(appear[0][2] and appear[1][1] and appear[2][0]) ANS = "Yes";
    cout << ANS << endl;
    return 0;
}