X = int(input())
a = [100, 101, 102, 103, 104, 105]
dp = [[False]*100010 for _ in range(10)]
dp[0][0] = True

for i in range(6):
    for j in range(X+1):
        dp[i+1][j] |= dp[i][j]
        if j >= a[i]:
            dp[i+1][j] |= dp[i][j-a[i]]
            dp[i+1][j] |= dp[i+1][j-a[i]]
if dp[6][X]:
    print(1)
else:
    print(0)