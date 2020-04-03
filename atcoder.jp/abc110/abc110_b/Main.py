N, M, X, Y = map(int, input().split())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
max_x = max(x)
min_y = min(y)
ans = 'War'
for i in range(-99, 101):
    if max_x < i and min_y >= i and X < i <= Y:
        ans = 'No War'
        break
print(ans)