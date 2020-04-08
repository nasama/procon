import sys
input = sys.stdin.readline
sys.setrecursionlimit(10**7) 

def dfs(G,v,p):
    for next in G[v]:
        if next == p:
            continue
        counter[next]+=counter[v]
        dfs(G,next,v)
    

N,Q = map(int, input().split())
counter = [0]*N
G = [[] for _ in range(N)]

for _ in range(N-1):
    a,b = map(int, input().split())
    a-=1
    b-=1
    G[a].append(b)
    G[b].append(a)

#print(subtree)
for _ in range(Q):
    p,x = map(int, input().split())
    p-=1
    counter[p]+=x
dfs(G,0,-1)
counter = map(str,counter)
print(' '.join(counter))