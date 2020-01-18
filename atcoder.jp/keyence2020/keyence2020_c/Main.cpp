#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N, K, S;
    cin >> N >> K >> S;
    ll A[100000];
    if(S==1000000000) {
        int i;
        for(i = 0; i < K; i++) {
            A[i] = S;
        }
        for(int j = i; j < N; j++) {
            A[j] = S-1;
        }        
    }
    else {
        int i;
        for(i = 0; i < K; i++) {
            A[i] = S;
        }
        for(int j = i; j < N; j++) {
            A[j] = S+1;
        }
    }
    rep(i,N){
        cout << A[i] << endl;
    }
    return 0;
}