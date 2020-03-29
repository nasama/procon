import collections
N, X, Y = map(int, input().split())
ans = collections.defaultdict(int)
for i in range(1,N):
    for j in range(i+1,N+1):
        minnum = min(abs(j-i),abs(X-i)+1+abs(j-Y),abs(Y-i)+1+abs(j-X))
        ans[minnum]+=1

for i in range(1,N):
    print(ans[i])