N = int(input())
a = [int(input()) for _ in range(N)]
L = set([0])
i = 0
cnt = 0
while True:
    if a[i]-1 == 1:
        cnt += 1
        break
    elif a[i]-1 in L:
        cnt = -1
        break
    else:
        L.add(a[i]-1)
        cnt += 1
        i = a[i]-1
print(cnt)