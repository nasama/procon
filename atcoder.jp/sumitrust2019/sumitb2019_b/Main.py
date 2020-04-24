import math
N = int(input())
if int(math.ceil(N/1.08)*1.08) == N:
    print(math.ceil(N/1.08))
else:
    print(':(')