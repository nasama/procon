N, K = map(int, input().split())
MOD = 1000000007
ans = 0
for i in range(K, N+2):
    ans += ((2*N-i+1)-(i-1))*i//2+1%MOD
print(ans%MOD)