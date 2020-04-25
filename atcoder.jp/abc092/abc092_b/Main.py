N = int(input())
D, X = map(int, input().split())
A = [int(input()) for _ in range(N)]
ans = 0
for a in A:
    i = 1
    count = 1
    while count <= D:
        count = 1 + a*i
        ans += 1
        i += 1
ans += X
print(ans)