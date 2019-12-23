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
    cout << (S <= "2019/04/30" ? "Heisei" : "TBD") << endl;
    return 0;
}
