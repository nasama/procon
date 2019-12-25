#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int D;
    cin >> D;
    if(D==25) cout << "Christmas" << endl;
    else if(D==24) cout << "Christmas Eve" << endl;
    else if(D==23) cout << "Christmas Eve Eve" << endl;
    else if(D==22) cout << "Christmas Eve Eve Eve" << endl;
    return 0;
}
