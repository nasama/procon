import collections
N, M = map(int, input().split())
ans = collections.defaultdict(int)
for i in range(N):
  tmp = list(map(int, input().split()))
  tmp = tmp[1:]
  for j in tmp:
    ans[j]+=1
  
maxnum = max(ans.values())
if maxnum == N:
  anslist = [kv[0] for kv in ans.items() if kv[1] == maxnum]
  print(len(anslist))
else:
  print(0)