#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a; cin >> a;
    int L = a/100;
    int R = a%100;
    if(1<=L&&L<=12){
        if(1<=R&&R<=12) cout << "AMBIGUOUS" << endl;
        else cout << "MMYY" << endl;
    } else {
        if(1<=R&&R<=12) cout << "YYMM" << endl;
        else cout << "NA" << endl;
    }
    return 0;
}
