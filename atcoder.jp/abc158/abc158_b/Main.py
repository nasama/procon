N, A, B = map(int, input().split())
ans = N//(A+B) * A
if N%(A+B) >= A:
  ans += A
else:
  ans += N%(A+B)
print(ans)