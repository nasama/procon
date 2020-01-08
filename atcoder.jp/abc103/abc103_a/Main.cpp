#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    vector<int> A(3);
    rep(i,3) cin >> A[i];
    sort(A.begin(),A.end());
    cout << A[2] - A[0] << endl;
    return 0;
}
