#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> a(N);
    int sum = 0;
    rep(i,N) {
        cin >> a[i];
    }
    int min = 40000*100;
    for(int i = -100; i <= 100; i++) {
        int sum = 0;
        rep(j,N) {
            sum += pow(a[j] - i, 2.0);
        }
        if(sum < min) min = sum;
    }
    
    cout << min << endl;
    return 0;
}