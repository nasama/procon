#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int gcd(int a, int b)
{
   if (a%b == 0)
   {
       return(b);
   }
   else
   {
       return(gcd(b, a%b));
   }
}

int main()
{
    int K;
    cin >> K;
    ll ans = 0;
    for(int i = 1; i < K+1; i++){
        for(int j = 1; j < K+1; j++){
            for(int k = 1; k < K+1; k++){
                ans += gcd(k,gcd(i, j));
            }
        }
    }

   cout << ans << endl;
   return 0;
}