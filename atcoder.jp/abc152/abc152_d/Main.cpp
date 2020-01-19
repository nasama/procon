#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N;
    cin >> N;
    int S[12][12];
    for(int i = 0; i <= 9; i++) {
        for(int j = 0; j <= 9; j++){
            S[i][j] = 0;
        }
    }
    for(int i = 1; i <= N; i++) {
        int value = i;
        int a[6];
        int k = 0;
        while(value/=10 > 0) {
            a[k] = (value % 10); value /= 10;
            k++;
        }
        int sentou = a[0];
        int matubi = a[k-1];
        S[sentou][matubi]++;
    }    
    ll ans = 0;
    for(int i = 0; i <= 9; i++) {
        for(int j = 0; j <= 9; j++){
            ans += S[i][j] * S[j][i];
        }
    }
    cout << ans << endl;
    return 0;
}