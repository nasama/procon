#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string S;
    cin >> S;
    int ans = 0;
    rep(i, S.size()-1){
        if(S[i] != S[i+1]) ans++;
    }
    cout << ans << endl;
    return 0;
}
