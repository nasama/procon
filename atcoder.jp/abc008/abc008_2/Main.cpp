#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<string> S(N);
    map<string, int> M;
    rep(i,N) {
        cin >> S[i];
        if(M.count(S[i])==0) {
            M[S[i]] = 1;
        }
        else {
            M[S[i]]++;
        }
    }
    int max = 0;
    string maxs;
    for( auto i = M.begin(); i != M.end() ; ++i ) {
        if(max < i->second) {
            max = i->second;
            maxs = i->first;
        }
    }
    cout << maxs << endl;
    return 0;
}