N, K = map(int, input().split())
A = list(map(int, input().split()))
s = set()
ns = []
start = 0
for i in range(N):
    if start in s:
        break
    else:
        s.add(start)
        ns.append(start)
        start = A[start]-1

si = ns.index(start)
if K < si:
    print(ns[K]+1)
else:
    print(ns[(K-si)%(i-si) + si]+1)