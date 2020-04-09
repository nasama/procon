import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7) 
m = int(input())
n = int(input())
grid = []
for i in range(n):
    array = list(map(int, input().split()))
    grid.append(array)

dx = [1,-1,0,0]
dy = [0,0,1,-1]
max_depth = 0
def dfs(h,w,d):
    global max_depth
    grid[h][w] = 0
    for i in range(4):
        nw = dx[i] + w
        nh = dy[i] + h

        if nw < 0 or nw >= m or nh < 0 or nh >= n:
            continue
        if grid[nh][nw] == 0:
            continue

        dfs(nh,nw,d+1)
    grid[h][w] = 1
    max_depth = max(max_depth, d+1)

for i in range(n):
    for j in range(m):
        if grid[i][j] == 0:
            continue
        dfs(i,j,0)
   
print(max_depth)