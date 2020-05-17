import math
A,B,H,M = map(int, input().split())
if H*30+M*0.5 <= M*6:
    k = M*6-H*30-M*0.5
else:
    k = H*30+M*0.5-M*6
ans = A**2 + B**2 -2*A*B*math.cos(math.radians(k))
print(math.sqrt(ans))