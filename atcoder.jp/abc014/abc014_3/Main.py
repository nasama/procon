n = int(input())
L = [0]*1000001
for _ in range(n):
    a,b = map(int, input().split())
    L[a]+=1
    if b!=1000000:
        L[b+1]-=1

for i in range(1000000):
    L[i+1] += L[i]
print(max(L))