#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
const int INF = 100000000;
typedef pair<int, int> P;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string S;
    cin >> S;
    S = S + to_string(0);
    string ans = "";
    int num = 1;
    rep(i,S.size()-1){
        if(S[i] == S[i+1]) num++;
        else {
            ans = ans + S[i] + to_string(num);
            num = 1;
        }
    }
    cout << ans << endl;
    return 0;
}
