import itertools
N = int(input())
P = tuple(map(int, input().split()))
Q = tuple(map(int, input().split()))
L = [i+1 for i in range(N)]
orders =list(itertools.permutations(L))
for i, order in enumerate(orders):
    if order == P:
        a = i
    if order == Q:
        b = i
print(abs(a-b))