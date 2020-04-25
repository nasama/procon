N, x = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
count = 0
ans = 0
for i in a[:-1]:
    x -= i
    if x >= 0:
        ans += 1
    else:
        break
if a[-1] == x:
    ans += 1
print(ans)