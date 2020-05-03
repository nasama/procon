N, M = map(int, input().split())
H = list(map(int, input().split()))
G = [[] for _ in range(N)]
for i in range(M):
    a,b = map(int, input().split())
    G[a-1].append(H[b-1])
    G[b-1].append(H[a-1])

ans = 0
for i in range(N):
    if not G[i]:
        ans += 1
    elif H[i] > max(G[i]):
        ans += 1

print(ans)       