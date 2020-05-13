H,W = map(int, input().split())
s = [input() for _ in range(H)]
ans = 'Yes'
dx = [0,0,1,-1]
dy = [1,-1,0,0]
for i in range(H):
    for j in range(W):
        if s[i][j] == '#':
            flag = False
            for k in range(4):
                nx = j+dx[k]
                ny = i+dy[k]
                if nx < 0 or ny < 0 or nx >= W or ny >= H:
                    continue
                if s[ny][nx] == '#':
                    flag = True
            if not flag:
                ans = 'No'
                break
print(ans)           