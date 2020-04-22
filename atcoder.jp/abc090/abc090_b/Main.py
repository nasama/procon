A, B = map(int, input().split())
ans = 0
for i in range(A,B+1):
    if list(str(i)) == list(reversed(str(i))):
        ans += 1
print(ans)