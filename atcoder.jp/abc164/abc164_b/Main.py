A, B, C, D = map(int, input().split())
ans = True
while True:
    C-=B
    if C <= 0:
        break
    A-=D
    if A <= 0:
        ans = False
        break
if ans:
    print('Yes')
else:
    print('No')