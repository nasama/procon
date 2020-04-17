import bisect
N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))
A.sort()
C.sort()
ans = 0
for i in range(N):
    ans += bisect.bisect_left(A,B[i])*(N-bisect.bisect_right(C,B[i]))
print(ans)