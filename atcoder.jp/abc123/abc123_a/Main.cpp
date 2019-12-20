#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) f2or (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int num[5], k;
    rep(i,5) {
        cin >> num[i];
    }
    cin >> k;

    if(num[4] - num[0] <= k) cout << "Yay!"<< endl;
    else cout << ":(" << endl;

    return 0;
}
