N, M = map(int, input().split())
maxL = 0
minR = float('inf')
for i in range(M):
    L, R = map(int, input().split())
    maxL = max(maxL, L)
    minR = min(minR, R)
if minR - maxL >= 0:
    print(minR - maxL + 1)
else:
    print(0)   