import itertools
N,M,Q = map(int, input().split())
a = [0]*Q
b = [0]*Q
c = [0]*Q
d = [0]*Q
for i in range(Q):
    a[i],b[i],c[i],d[i] = map(int, input().split())

ans = 0

for L in list(itertools.combinations_with_replacement(range(1,M+1),N)):
    now = 0
    for i in range(Q):
        if L[b[i]-1] - L[a[i]-1] == c[i]:
            now += d[i]
    ans = max(ans, now)

print(ans)