from collections import Counter
N = int(input())
A = list(map(int, input().split()))
ans = 0
l = []
r = []
for i,j in enumerate(A):
    l.append(i+j)
    r.append(i-j)

b = Counter(r)
for i in l:
    ans += b.get(i,0)
print(ans)