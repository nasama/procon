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
if(S[0]!=S[1]&&S[1]!=S[2]&&S[2]!=S[0]) cout << "Yes" << endl;
else cout << "No" << endl;
    return 0;
}
