#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    for(int i=0; i<S.size(); i++){
        int a = S[i] - 'A';
        a = (a+N) % 26;
        S[i] = 'A' + a;
    }
    cout << S << endl;
    return 0;
}