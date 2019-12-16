#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;

int A, B;

void solve() {
    cin >> A >> B;
    if(A >= 10 || B >= 10) {
        cout << -1 << endl;
    }
    else{
        cout << A*B << endl;
    }
    return; 
}

int main() {
    solve();
    return 0;
}
