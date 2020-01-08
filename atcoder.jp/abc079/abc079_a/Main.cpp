#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string N;
    cin >> N;
    if((N[0]==N[1]&&N[0]==N[2])||(N[1]==N[2]&&N[1]==N[3])){
        cout << "Yes" << endl;
    }
    else cout <<"No" << endl;

    return 0;
}