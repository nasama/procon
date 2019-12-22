#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll A, B, tmp, r, x;
    cin >> A >> B;
    x = A * B;
    if(A < B){
        tmp = A;
        A = B;
        B = tmp;
    }

    r = A % B;
    while(r != 0){
        A = B;
        B = r;
        r = A % B;
    }
    cout << x/B << endl;
    return 0;
}
