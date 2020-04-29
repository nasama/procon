import collections
N = int(input())
a = list(map(int, input().split()))
d = collections.defaultdict(int)
for i in a:
    for j in range(-1,2):
        if i+j >= 0:
            d[i+j] += 1

print(max(d.values()))