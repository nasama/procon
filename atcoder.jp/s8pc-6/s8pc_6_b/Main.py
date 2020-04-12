N = int(input())
A = [0]*N
B = [0]*N
for i in range(N):
    A[i], B[i] = map(int, input().split())

A.sort()
B.sort()
s = A[N//2]
t = B[N//2]

ans = 0
for i in range(N):
    ans += abs(A[i]-s)
    ans += abs(B[i]-t)
    ans += abs(A[i]-B[i])
print(ans)