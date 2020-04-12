t = {}
ans = 0
N = int(input())
for i in range(N):
    a,b = map(int, input().split())
    t[(a,b)] = 1

nt = sorted(t)

for i in range(N):
    for j in range(i+1,N):
        p1 = nt[i][0]+nt[j][1]-nt[i][1]
        p2 = nt[i][1]-nt[j][0]+nt[i][0]

        q1 = nt[j][0]+nt[j][1]-nt[i][1]
        q2 = nt[j][1]-nt[j][0]+nt[i][0]

        if (p1,p2) in t and (q1,q2) in t:
            d = (p1 - q1) ** 2 + (p2 - q2) ** 2
            ans = max(ans,d)
print(ans)