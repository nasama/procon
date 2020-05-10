N,M,X = map(int, input().split())
C = [0]*N
A = []
for i in range(N):
    P = list(map(int, input().split()))
    C[i] = P[0]
    A.append(P[1:])

ans = float('inf')
exist = False
for bit in range(1 << N):
    flag = True
    S = [0]*M
    sumnum = 0
    for i in range(N):
        if bit & (1 << i):
            sumnum += C[i]
            for j in range(M):
                S[j] += A[i][j]

    for k in range(M):
        if S[k] < X:
            flag = False
            break
    if flag:
        ans = min(ans, sumnum)
    
if ans != float('inf'):
    print(ans)
else:
    print(-1)