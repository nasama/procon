#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    string s[100];
    int t[100];
    string X;
    cin >> N;
    rep(i,N) cin >> s[i] >> t[i];
    cin >> X;
    int i;
    for(i = 0; i < N; i++){
        if(X == s[i]) break;
    }
    int ans = 0;
    for(int j = i+1; j < N; j++){
        ans+=t[j];
    }
    cout << ans << endl;
    return 0;
}
