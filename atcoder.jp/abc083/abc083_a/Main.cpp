#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if((A+B) < (C+D)) cout << "Right" << endl;
    if((A+B) > (C+D)) cout << "Left" << endl;
    if((A+B) == (C+D)) cout << "Balanced" << endl;
    return 0;
}