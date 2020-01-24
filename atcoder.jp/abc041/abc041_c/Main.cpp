#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<pair<int, int> > a(N);
    rep(i,N) {
        int value;
        cin >> value;
        a[i] = make_pair(value, i+1);
    }
    sort(a.rbegin(),a.rend());
    rep(i,N) {
        cout << a[i].second << endl;
    }
    return 0;
}