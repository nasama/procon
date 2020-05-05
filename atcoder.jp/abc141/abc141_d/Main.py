import heapq
import sys
input = sys.stdin.readline
n,m=map(int,input().split())
a=list(map(lambda x:int(x)*(-1),input().split()))
heapq.heapify(a)
for i in range(m):
    maxnum = heapq.heappop(a)
    heapq.heappush(a,-((-maxnum)//2))
print(-sum(a))