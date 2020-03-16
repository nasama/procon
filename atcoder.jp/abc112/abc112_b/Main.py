N, T = map(int, input().split())
ans = float('inf')
for _ in range(N):
  a, b = map(int, input().split())
  if b <= T:
    ans = min(a, ans)
if ans == float('inf'):
  ans = 'TLE'
print(ans)