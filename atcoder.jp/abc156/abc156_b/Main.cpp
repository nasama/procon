#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    int k;
    cin >> n >> k;
    int i = 0;
    while(n) {
        i++;
        n = n/k;
    }
    cout << i << endl;
    return 0;
}