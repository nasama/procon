import sys
sys.setrecursionlimit(10**7) 

#右上左下
dx = [1,0,-1,0]
dy = [0,1,0,-1]

def dfs(h,w):
    seen[h][w] = True

    for dir in range(4):
        nh = h + dx[dir]
        nw = w + dy[dir]

        if nh < 0 or nh >= H or nw < 0 or nw >= W:
            continue
        if field[nh][nw] == '#':
            continue

        if seen[nh][nw]:
            continue

        dfs(nh,nw)

H, W = map(int, input().split())
field = [0]*H
for h in range(H):
    field[h] = input()

#sとgのマス特定
for h in range(H):
    for w in range(W):
        if field[h][w] == 's':
            sh = h
            sw = w
        if field[h][w] == 'g':
            gh = h
            gw = w   

#探索開始
seen = [[0]*510 for _ in range(510)]
dfs(sh,sw)

if seen[gh][gw]:
    print('Yes')
else:
    print('No')