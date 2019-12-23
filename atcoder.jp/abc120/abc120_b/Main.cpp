#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int A, B, K;
    cin >> A >> B >> K;
    int minnum = min(A,B);
    int flag = 0;
    int i;
    for(i = minnum; i > 0; i--){
        if(A%i==0 && B%i==0) flag++;
        if(flag == K) break;
    }
    cout << i << endl;
    return 0;
}
