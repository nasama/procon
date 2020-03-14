N = int(input())
ans = 2
for i in range(100):
  if ans > N:
    ans //= 2
    break
  ans *= 2
print(ans)
