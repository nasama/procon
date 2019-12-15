#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main() {
    int N;
    string S;
    cin >> N >> S;
    string ans = "Yes";
    if(N%2 == 1) ans = "No";
    else {
        rep(i,N/2) {
            if(S[i] != S[i+N/2]) {
                ans = "No";
                break;
            }
        }
    }
    cout << ans << endl;
    return 0;
}