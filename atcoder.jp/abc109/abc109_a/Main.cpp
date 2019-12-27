#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int A, B;
    cin >> A >> B;
    string ans;
    if(A%2==0 || B%2==0) ans = "No";
    else ans = "Yes";
    cout << ans << endl;
    return 0;
}
