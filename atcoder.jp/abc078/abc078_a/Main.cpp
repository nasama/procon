#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    char X, Y;
    cin >> X >> Y;
    if(X < Y) cout << '<' << endl;
    else if(X > Y) cout << '>' << endl;
    else cout << '=' << endl;
    return 0;
}