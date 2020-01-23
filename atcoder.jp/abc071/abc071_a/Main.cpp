#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int x, a, b;
    cin >> x >> a >> b;
    if(abs(x-a) < abs(x-b)) {
        cout << "A" << endl;
    }
    else {
        cout << "B" << endl;
    }
    return 0;
}