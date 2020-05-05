N, K = map(int, input().split())
a = list(map(int, input().split()))

right = 0
sumnum = 0
ans = 0
for left in range(N):
    while right < N and sumnum < K:
        sumnum += a[right]
        right += 1
    
    if sumnum < K:
         break
    
    ans += N-right+1

    if right == left:
        right += 1
    else:
        sumnum -= a[left]

print(ans)