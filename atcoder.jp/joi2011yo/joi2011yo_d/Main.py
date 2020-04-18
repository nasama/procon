N = int(input())
L = list(map(int, input().split()))
dp = [[0]*1010 for _ in range(25)]

for i in range(21):
    if L[0] == i:
        dp[i][0] = 1

for k in range(N-1):  
    for B in range(21):
        if B-L[k+1] < 0:
            dp[B][k+1] = dp[B+L[k+1]][k]
        elif B+L[k+1] > 20:
            dp[B][k+1] = dp[B-L[k+1]][k]
        else:
            dp[B][k+1] = dp[B-L[k+1]][k] + dp[B+L[k+1]][k]

print(dp[L[N-1]][N-2])