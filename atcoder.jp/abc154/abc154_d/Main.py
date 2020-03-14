N, K = map(int, input().split())
p = list(map(int, input().split()))
E = [(1+p[i])/2 for i in range(N)]
S = [0]
for i in range(0,N):
  S.append(S[i]+E[i])

maxnum = 0
for i in range(N+1):
  if i+K >= N+1:
    break
  maxnum = max(S[i+K]-S[i], maxnum)
print(maxnum)