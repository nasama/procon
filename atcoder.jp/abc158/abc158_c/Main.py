A, B = map(int, input().split())
ans = -1
for i in range(10001):
  if (A/0.08 <= i < (A+1)/0.08) and (B/0.1 <= i < (B+1)/0.1):
    ans = i
    break
    
print(ans)