N, M = map(int, input().split())
S = []
for i in range(M):
    k = list(map(int, input().split()))
    s = k[1:]
    S.append(s)
p = list(map(int, input().split()))

ans = 0
for bit in range(1 << N):
    #矛盾チェック
    flag = True
    for i in range(M):
        sum = 0
        for j in S[i]:
            if bit & (1 << (j-1)):
                sum += 1
        if sum%2 != p[i]:
            flag = False
            break
    if flag:
        ans += 1
print(ans)          