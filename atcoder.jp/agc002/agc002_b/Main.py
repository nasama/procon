N, M = map(int, input().split())
num = [1]*(N+1)
red = [0]*(N+1)
red[1] = 1

for _ in range(1,M+1):
    x, y = map(int, input().split())
    if red[x]:
        red[y] = 1   
    num[x] = num[x]-1
    num[y] = num[y]+1
    if num[x]==0:
        red[x] = 0

ans = 0
for i in range(1,N+1):
    if red[i] == 1:
        ans+=1
print(ans)