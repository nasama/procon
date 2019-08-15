#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef long long ll;

ll func(ll n, ll x){
  if(n==-1) return 0;
  else return n/x+1;
}

int main() {
	ll a, b, x;
	cin >> a >> b >> x;
  cout << func(b, x) - func(a-1, x) << endl;
}