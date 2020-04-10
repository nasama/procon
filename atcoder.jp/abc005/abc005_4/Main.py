N = int(input())
D = []
for i in range(N):
    array = list(map(int, input().split()))
    D.append(array)

# 二次元累積和
s = [[0]*(N+1) for _ in range(N+1)]
for i in range(N):
    for j in range(N):
        s[i+1][j+1] = s[i][j+1] + s[i+1][j] - s[i][j] + D[i][j]

# 全ての長方形の面積
val = [0] * (N*N+1) # val[v] := 面積が v の長方形領域の総和の最大値
for x1 in range(N):
    for x2 in range(x1+1,N+1):
        for y1 in range(N):
            for y2 in range(y1+1,N+1):
                area = (x2-x1) * (y2-y1)
                sum = s[x2][y2] - s[x1][y2] - s[x2][y1] + s[x1][y1]
                val[area] = max(val[area], sum)

# val[v] := 面積が v 以下の長方形領域の総和の最大値
for v in range(N*N):
    val[v+1] = max(val[v+1], val[v])

Q = int(input())
for q in range(Q):
    P = int(input())
    print(val[P])