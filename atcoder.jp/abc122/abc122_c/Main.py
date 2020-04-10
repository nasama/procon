N,Q = map(int, input().split())
S = input()

a = [0]*N

for i in range(N-1):
    if S[i] == 'A' and S[i+1] == 'C':
        a[i] = 1

s = [0]*(N+1)
for i in range(N):
    s[i+1] = s[i] + a[i]

for i in range(Q):
    l,r = map(int, input().split())
    ans = s[r-1]-s[l-1]
    print(ans)