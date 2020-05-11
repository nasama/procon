H, W = map(int, input().split())
N = int(input())
a = list(map(int, input().split()))
ans = [[0]*W for _ in range(H)]
h = -1
w = -1
flag = False
for i in range(N):
    for j in range(a[i]):
        w+=1
        w%=W
        if w==0:
            w=0
            h+=1
            if flag:
                flag = False
            else:
                flag = True
        if flag:
            ans[h][w] = i+1
        else:
            ans[h][W-1-w] = i+1
    
for i in range(H):
    print(*ans[i])