#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;
    vector<int> p(M+2);
    vector<string> S(M+2);
    rep(i,M) cin >> p[i] >> S[i];
    vector<int> WA(N+2);
    vector<int> AC(N+2);
    rep2(i,N+1) {
        WA[i] = 0;
        AC[i] = 0;
    }
    rep(i,M) {
        if(S[i]=="WA" && AC[p[i]]==0) WA[p[i]]++;
        else if(S[i]=="AC" && AC[p[i]]==0) AC[p[i]]++;
    }
    rep2(i,N+1) {
        if(AC[i] == 0) WA[i]=0;
    }
    int ans1 = 0;
    int ans2 = 0;
    rep2(i,N+1) {
        ans1+=AC[i];
        ans2+=WA[i];
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
