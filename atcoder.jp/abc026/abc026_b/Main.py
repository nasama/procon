import math
N = int(input())
R = [int(input()) for _ in range(N)]
R.sort(reverse=True)
ans = 0
for i, num in enumerate(R):
    if i%2==0:
        ans += num**2
    else:
        ans -= num**2
print(ans*math.pi)    