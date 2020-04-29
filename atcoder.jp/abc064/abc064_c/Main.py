N = int(input())
a = list(map(int, input().split()))
L = [False]*8
cnt = 0
for i in range(N):
    for j in range(8):
        if j*400 <= a[i] <= j*400+399:
            L[j] = True
    if a[i] >= 3200:
        cnt += 1
if L.count(1):
    minnum = L.count(1)
else:
    minnum = 1
maxnum = min(N, minnum+cnt)
print(minnum, maxnum)