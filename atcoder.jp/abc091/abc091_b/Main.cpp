#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N;
    vector<string> s(N);
    rep(i,N) cin >> s[i];
    cin >> M;
    vector<string> t(M);
    rep(i,M) cin >> t[i];

    int max = 0;
    rep(i,N) {
        int ans = 1;
        for(int j = i+1; j < N; j++) {
            if(s[i] == s[j]) ans++;
        } 
        rep(k,M) {
            if(s[i] == t[k]) ans--;
        } 
        if(max < ans) max = ans;    
    } 
    cout << max << endl;
    return 0;
}
