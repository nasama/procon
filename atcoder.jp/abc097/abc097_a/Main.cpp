#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(abs(a-c) <= d) cout << "Yes" << endl;
    else if(abs(a-b) <= d && abs(b-c) <= d) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
