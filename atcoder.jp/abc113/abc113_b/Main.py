N = int(input())
T, A = map(int, input().split())
H = list(map(int, input().split()))
ans = 10000
minnum = float('inf')
for i in range(N):
  if abs(T-H[i]*0.006-A) < minnum:
    minnum = abs(T-H[i]*0.006-A)
    ans = i+1
print(ans)