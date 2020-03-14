#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ll a,b,c;
    cin >> a >> b >> c;
    if (c-a-b >= 0){
        if (4*a*b < (c-a-b)*(c-a-b)) {

            cout << "Yes" << endl;
        }
        else cout << "No" << endl;
    }
    else {
        cout << "No" << endl;
    }

}
