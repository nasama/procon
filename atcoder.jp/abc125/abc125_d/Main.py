N = int(input())
A = list(map(int, input().split()))
cnt = 0
sumnum = 0
minnum = float('inf')
for i in A:
    if i < 0:
        i *= -1
        cnt += 1
    minnum = min(minnum, i)
    sumnum += i
if cnt%2 == 0:
    print(sumnum)
else:
    print(sumnum-2*minnum)