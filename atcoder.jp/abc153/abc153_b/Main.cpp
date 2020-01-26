#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int H, N;
    cin >> H >> N;
    vector<int> A(N);
    ll sum = 0;
    rep(i,N) {
        cin >> A[i];
        sum+=A[i];
    }
    if(H<=sum) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}