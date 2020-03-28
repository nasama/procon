K, N = map(int, input().split())
A = list(map(int, input().split()))
maxnum = 0
for i in range(0,N-1):
    maxnum = max(maxnum, A[i+1] - A[i])
maxnum = max(maxnum, A[0]+K-A[N-1])

print(K-maxnum)