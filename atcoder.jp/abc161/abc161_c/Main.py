N, K = map(int, input().split())
a = N//K
ans = min((a+1)*K-N , N-a*K)
print(ans)