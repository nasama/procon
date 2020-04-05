from collections import deque
H, W, N = map(int, input().split())
grid = []
for _ in range(H):
    array = input()
    grid.append(array)
#print(grid)


order = {}
for i in range(H):
    for j in range(W):
        num = grid[i][j]
        if num!='.' and num!='X':
            if num=='S':
                num = 0
            order[int(num)] = (i,j)

#print(order)

ans = 0

#探索

m = [0,0,1,-1]
n = [1,-1,0,0]
for i in range(N):
    dist = []
    for _ in range(H):
        a = [-1]*W
        dist.append(a)

    sy = order[i][0]
    sx = order[i][1]
    gy = order[i+1][0]
    gx = order[i+1][1]

    que = deque()
    dist[sy][sx] = 0
    que.append((sy,sx))
    #print(que)

    while len(que)!=0:
        v = que.popleft()
        vy = v[0]
        vx = v[1]
        for i in range(4):
            y = vy + m[i]
            x = vx + n[i]
            if 0 <= y <= H-1 and 0 <= x <= W-1 and grid[y][x]  != 'X' and dist[y][x] == -1:
                que.append((y,x))
                #print(que)
                dist[y][x] = dist[vy][vx] + 1
    ans += dist[gy][gx]
    #print(dist[gy][gx])
            
print(ans)

