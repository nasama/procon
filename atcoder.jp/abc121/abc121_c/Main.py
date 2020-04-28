N, M = map(int, input().split())
L = []
for _ in range(N):
    A,B = map(int, input().split())
    L.append((A,B))
L.sort()
ans = 0
for i in range(N):
    if M-L[i][1] >= 0:
        ans += L[i][0]*L[i][1]
        M-=L[i][1] 
    else:
        ans += M*L[i][0]
        break
print(ans)