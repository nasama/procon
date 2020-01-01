#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll A, B, K;
    cin >> A >> B >> K;
    if(A>K) {
        A = A - K;
    }  
    else{
        B = B - (K - A);
        A = 0;
    }
    if(B < 0) B = 0;
    cout << A << " " << B << endl;
    
    return 0;
}
