N = int(input())
a = list(map(int, input().split()))
ans = 0
for i in range(N):
    cnt = 0
    while True:
        if a[i] % 2 == 0:
            a[i]//=2
            cnt+=1
        else:
            break
    ans += cnt
print(ans)