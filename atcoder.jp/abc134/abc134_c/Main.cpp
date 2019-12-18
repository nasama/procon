#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <math.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int,int> > A(n);
    rep(i,n) {
        cin >> A[i].first;
        A[i].second = i;
    }
    sort(A.rbegin(), A.rend());
    rep(i,n){
        if(A[0].second == i) cout << A[1].first << endl;
        else cout << A[0].first << endl;
    }
    return 0;
}