N, K = map(int, input().split())
h = [int(input()) for _ in range(N)]
h = sorted(h)
ans = float('inf')
for i in range(N-K+1):
    ans = min(h[i+K-1] - h[i], ans)
print(ans)