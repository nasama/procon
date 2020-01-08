#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int R;
    cin >> R;
    if(R<1200) cout << "ABC" << endl;
    else if(R<2800) cout << "ARC" << endl;
    else cout << "AGC" << endl;
    return 0;
}
