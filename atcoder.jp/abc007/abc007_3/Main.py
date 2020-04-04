from collections import deque 
R, C = map(int, input().split())
sy, sx = map(int, input().split())
sy -= 1; sx -= 1
gy, gx = map(int, input().split())
gy -= 1; gx -= 1
grid = []
for _ in range(R):
    array = input()
    grid.append(array)

#グラフ入力受取
G = []
for i in range(R):
    a = [[] for j in range(C)]
    G.append(a)
m = [1,-1,0,0]
n = [0,0,1,-1]

for i in range(1,R-1):
    for j in range(1,C-1):
        for k in range(4):
            if grid[i+m[k]][j+n[k]] == '.':
                G[i][j].append((i+m[k],j+n[k]))

#頂点 s をスタートとした探索
dist = []
for i in range(R):
    a = [-1]*C
    dist.append(a)

que = deque()
dist[sy][sx] = 0
que.append((sy,sx))
while len(que)!=0:
    v = que.popleft()
    for nv in G[v[0]][v[1]]:
        if dist[nv[0]][nv[1]] == -1:
            dist[nv[0]][nv[1]] = dist[v[0]][v[1]]+1
            que.append(nv)
    
print(dist[gy][gx])