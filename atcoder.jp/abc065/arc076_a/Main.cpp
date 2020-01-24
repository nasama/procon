#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;

ll factorial(ll n){
    ll answer = 1;
    while(n > 1){
        answer *= n;
        answer %= 1000000007;
        n--;
    }
    return answer;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll N, M;
    cin >> N >> M;
    if(abs(N-M) > 1) {
        cout << 0 << endl;
    }
    else {
        ll fn = factorial(N);
        ll fm = factorial(M);
        if((abs(N-M) == 0)) cout << fn * fm * 2 % 1000000007 << endl;
        else cout << fn * fm % 1000000007 << endl;
    }
    return 0;
}