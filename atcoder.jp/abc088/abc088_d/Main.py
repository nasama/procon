from collections import deque
H, W = map(int, input().split())
grid = []
for _ in range(H):
    array = input()
    grid.append(array)
# print(grid)
#もともとの黒いマス目の数をカウント
count = 0
for i in range(H):
    for j in range(W):
        if grid[i][j] == '#':
            count+=1
# print(count)

dist = [[-1]*W for _ in range(H)]
# print(dist)

dist[0][0] = 0
dy = [0,0,1,-1]
dx = [-1,1,0,0]
que = deque()
que.append([0,0])

while que:
    y,x = que.popleft()
    for i in range(4):
        vy = y + dy[i] 
        vx = x + dx[i] 
        if vy < 0 or H <= vy or vx < 0 or W <= vx:
            continue
        if dist[vy][vx] != -1 or grid[vy][vx] == '#':
            continue
        dist[vy][vx] = dist[y][x] + 1
        que.append([vy,vx])

if dist[-1][-1] == -1:
    print(-1)
else:
    print(H*W-dist[-1][-1]-count-1)