from collections import defaultdict

N = int(input())
A = list(map(int, input().split()))
s = [0]*(N+1)

d = defaultdict(int)
for i in range(N):
    s[i+1] = s[i] + A[i]
for i in range(N+1):
    d[s[i]]+=1

ans = 0
for v in d.values():
    if v >= 2:
        ans += v*(v-1)//2
print(ans)