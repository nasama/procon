from heapq import heappop, heappush, heapify
N, M = map(int, input().split())
A = list(map(int, input().split()))
BC = []
for _ in range(M):
    B, C = map(int, input().split())
    BC.append((B, C))
heapify(A)
BC = sorted(BC, key = lambda x: -x[1])

for b, c in BC:
    for j in range(b):
        a = heappop(A)
        if a < c:
            heappush(A, c)
        else:
            heappush(A, a)
            break

print(sum(A))