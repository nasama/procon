#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N, A, B;
    cin >> N;
    if(N==1) cout << "Hello World" << endl;
    else {
        cin >> A >> B;
        cout << A+B << endl;
    }
    return 0;
}
