#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
#define rep2(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v(5);
    rep(i,5) cin >> v[i];
    int min = 1000;

    do {  
        int time = 0;
        for (int i = 0; i < v.size(); i++){
            if(time % 10 != 0){
                time += (10 - time % 10);
            }
            time += v[i];
        }
        if(min > time) min = time;
    } while (next_permutation(v.begin(), v.end()));

    cout << min << endl;
    return 0;
}
