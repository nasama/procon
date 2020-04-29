N, M = map(int, input().split())
a = [0]*N
b = [0]*N
c = [0]*M
d = [0]*M
for i in range(N):
    a[i], b[i] = map(int, input().split())
for j in range(M):
    c[j], d[j] = map(int, input().split())
for i in range(N):
    minnum = float('inf')
    for j in range(M):
        if minnum > abs(a[i]-c[j]) + abs(b[i]-d[j]):
            minnum = abs(a[i]-c[j]) + abs(b[i]-d[j])
            ans = j+1
    print(ans)