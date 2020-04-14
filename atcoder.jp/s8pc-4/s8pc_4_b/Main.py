N, K = map(int, input().split())
A = list(map(int, input().split()))
money = float('inf')
for bit in range(1 << N):
    S = [0]*N
    for i in range(N):
        if bit & (1 << i):
            S[i] = 1
    if S.count(1) >= K:
        sumnum = 0
        maxh = A[0]
        for i in range(1, N):
            if S[i] == 1:
                if A[i] > maxh:
                    maxh = A[i]
                else:
                    maxh += 1
                    sumnum += (maxh - A[i])
            else:
                maxh = max(maxh, A[i])

        money = min(money, sumnum)
print(money)