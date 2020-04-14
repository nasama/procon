import itertools, math
N = int(input())
L = [list(map(int, input().split())) for _ in range(N)]
orders = list(itertools.permutations(L))
d = 0
for order in orders:
    dist = 0
    for i in range(0,N-1):
        dist += math.sqrt((order[i][0]-order[i+1][0])**2 + (order[i][1]-order[i+1][1])**2)
    d += dist
print(d/len(orders))