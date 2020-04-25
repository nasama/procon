N, M = map(int, input().split())
L = [[] for _ in range(N)]
for _ in range(M):
    a, b = map(int, input().split())
    L[a-1].append(b-1)
    L[b-1].append(a-1)
for l in L:
    print(len(l))