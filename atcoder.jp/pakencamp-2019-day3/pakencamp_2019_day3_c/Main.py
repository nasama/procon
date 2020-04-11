N,M = map(int, input().split())
ans = 0
A = []
for i in range(N):
    array = list(map(int, input().split()))
    A.append(array)
for i in range(M):
    for j in range(i+1,M):
        a = 0
        for k in range(N):
            a += max(A[k][i],A[k][j])
        ans = max(ans,a)
print(ans)